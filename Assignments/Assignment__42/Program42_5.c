#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Minimum
//  Description:    Returns smallest element from singly linked list.
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

int Minimum(PNODE head)
{
    int iMin=head -> data;

    while (head != NULL)
    {
        if ((head -> data) < iMin)
        {
            iMin=head -> data;
        }
        head=head -> next;
    }
    return iMin;
}


int main()
{
    PNODE head = NULL;
    int iValue=30, iRet=0;

    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    iRet = Minimum(head, iValue);
    printf("Minimum number is: %d\n",iRet);
    return 0;
}