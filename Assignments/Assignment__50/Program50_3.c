#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckSorted
//  Description:    Displays elements greater than the average.
//  Input:          PNODE
//  Output:         BOOL
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           31/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if ((*head) == NULL)     //LL is empty
    {
        (*head) = newn;
    }
    else                      //LL contains atleast 1 node
    {
        newn->next = (*head);
        (*head)=newn;  
    }
}

BOOL CheckSorted(PNODE head)
{
    int iValue=0;
    BOOL bFlag = FALSE;

    bFlag=TRUE;
    while (head->next != NULL)
    {
        iValue = head->data;
        if(iValue > head->next->data)
        {
            bFlag=FALSE;
            break;
        }
        head=head->next;
    }
    
    return bFlag;
}

int main()
{
    PNODE head = NULL;
    BOOL bRet = FALSE;

    InsertFirst(&head, 70);
    InsertFirst(&head, 60);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    bRet=CheckSorted(head);

    if (bRet == TRUE)
    {
        printf("List is sorted\n");
    }
    else
    {
        printf("List is unsorted\n");
    }
    
    return 0;
}