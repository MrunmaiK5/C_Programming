#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  SumDigits
//  Description:    Displays addition of digits of numbers.
//  Input:          PNODE
//  Output:         Void
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

void SumDigit(PNODE head)
{
    int iSum = 0, iDigit = 0, iNo = 0;

    while (head != NULL)
    {
        iNo = head -> data;
        iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\t",iSum);
        head = head -> next;
    }
    printf("\n"); 
}


int main()
{
    PNODE head = NULL;
    
    InsertFirst(&head, 89);
    InsertFirst(&head, 22);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 20);
    InsertFirst(&head, 11);

    SumDigit(head);
    return 0;
}