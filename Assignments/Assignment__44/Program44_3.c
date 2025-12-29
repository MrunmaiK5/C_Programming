#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountOdd
//  Description:    Counts odd number from linked list.
//  Input:          Void
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           30/12/2025
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

int CountOdd(PNODE head)
{
    int iCount=0;
    while(head != NULL)
    {
        if ((head->data)%2 != 0)
        {
            iCount++;
        }
        head=head->next;
    }
    return iCount;
}


int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    iRet=CountOdd(head);
    printf("Count: %d\n",iRet);
    
    return 0;
}