#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Search
//  Description:    Checks whether a number is predent or not.
//  Input:          Integer
//  Output:         BOOL
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

BOOL Search(PNODE head, int No)
{
    
    while(head != NULL)
    {
        if (head->data == No)
        {
            return TRUE;
        }
        head=head->next;
    }
    return FALSE;
}


int main()
{
    PNODE head = NULL;
    int iValue = 0;
    BOOL bRet = FALSE;
    
    iValue = 11;

    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    bRet=Search(head, iValue);
    if (bRet == TRUE)
    {
        printf("Number is present in linked list");
    }
    else
    {
        printf("Number is not present in linked list");
    }
    
    return 0;
}