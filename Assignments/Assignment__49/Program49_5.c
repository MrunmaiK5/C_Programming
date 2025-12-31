#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountTwoDigit
//  Description:    Counts two digits elements from the list.
//  Input:          PNODE
//  Output:         Void
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

int CountTwoDigit(PNODE head)
{
    int iDCount=0, iValue=0, iCount=0;
    while (head != NULL)
    {
        iValue=head->data;

        while (iValue > 0)
        {
            iDCount++;
            iValue=iValue/10;
        }
        
        if (iDCount == 2)
        {
            iCount++;
        }

        head=head->next;
        iDCount=0;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 70);
    InsertFirst(&head, 237);
    InsertFirst(&head, 7);
    InsertFirst(&head, 45);
    InsertFirst(&head, 2230);
    InsertFirst(&head, 432);
    InsertFirst(&head, 10);

    iRet = CountTwoDigit(head);
    printf("Count: %d\n",iRet);

    return 0;
}