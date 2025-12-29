#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Frequency
//  Description:    Counts how many time a number appears in linked list.
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

int Freaquency(PNODE head, int No)
{
    int iCount=0;
    while(head != NULL)
    {
        if ((head->data) == No)
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
    int iRet = 0, iValue= 0;

    iValue = 11;
    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 11);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    iRet=Freaquency(head, iValue);
    printf("Count: %d\n",iRet);
    
    return 0;
}