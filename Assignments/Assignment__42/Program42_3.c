#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Addition
//  Description:    Returns addition of all elements of singly linked list.
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

int Addition(PNODE head)
{
    int iSum = 0;

    while (head != NULL)
    {
        iSum=iSum+(head -> data);
        head=head -> next;
    }
    return iSum; 
}

int main()
{
    PNODE head = NULL;
    int iValue=30, iRet=0;

    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    iRet = Addition(head, iValue);
    printf("Addition: %d\n",iRet);
    return 0;
}