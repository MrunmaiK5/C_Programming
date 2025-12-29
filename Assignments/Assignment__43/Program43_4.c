#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  SecMaximum
//  Description:    Returns asecond maximum element from singly linked list.
//  Input:          PNODE
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           17/12/2025
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

int SecMaximum(PNODE head)
{
    int iMax=0, iSMax=0;
    iMax=head->data;

    while(head!=NULL)
    {
        if (head->data > iMax)
        {
            iSMax = iMax;
            iMax = head->data;
        }
        head=head->next;
    }

    return iSMax;
}

int main()
{
    PNODE head = NULL;
    int iRet=0;
    
    InsertFirst(&head, 89);
    InsertFirst(&head, 22);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    iRet=SecMaximum(head);
    printf("Secong maximum: %d\n",iRet);

    return 0;
}




