#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Maximum
//  Description:    Returns largest element from singly linked list.
//  Input:          PNODE, Integer
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

int Maximum(PNODE head)
{
    int iMax=head -> data;

    while (head != NULL)
    {
        if ((head -> data) > iMax)
        {
            iMax=head -> data;
        }
        head=head -> next;
    }
    return iMax;
}


int main()
{
    PNODE head = NULL;
    int iValue=30, iRet=0;

    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    iRet = Maximum(head, iValue);
    printf("Maximum number is: %d\n",iRet);
    return 0;
}