#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountDivByFive
//  Description:    Counts elements divisible by five.
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

int CountDivByFive(PNODE head)
{
    int iCount=0;
    while (head != NULL)
    {
        if (head->data % 5 == 0)
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
    InsertFirst(&head, 70);
    InsertFirst(&head, 37);
    InsertFirst(&head, 57);
    InsertFirst(&head, 45);
    InsertFirst(&head, 30);
    InsertFirst(&head, 22);
    InsertFirst(&head, 10);

    iRet = CountDivByFive(head);
    printf("Count: %d\n",iRet);
    
    return 0;
}