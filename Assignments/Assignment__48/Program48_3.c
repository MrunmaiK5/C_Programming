#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  MultiplyByTwo
//  Description:    Multiply each node with 2.
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

void MultiplyByTwo(PPNODE head)
{
    PNODE temp = NULL;
    temp = *head;

    while (temp != NULL)
    {
        temp->data = temp->data * 2;
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
    InsertFirst(&head, 37);
    InsertFirst(&head, 50);
    InsertFirst(&head, 45);
    InsertFirst(&head, 31);
    InsertFirst(&head, 22);
    InsertFirst(&head, 10);

    MultiplyByTwo(&head);

    return 0;
}