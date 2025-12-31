#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ReplaceNegative
//  Description:    Replaces negative values from list with 0.
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

void ReplaceNegative(PPNODE head)
{
    PNODE temp = NULL;
    temp = *head;

    while (temp != NULL)
    {
        if(temp->data < 0)
        {
            temp->data = 0;
        }
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;
    int iValue=30;

    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, -50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, -20);
    InsertFirst(&head, 10);

    ReplaceNegative(&head);

    return 0;
}