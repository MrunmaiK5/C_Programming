#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  SumDigits
//  Description:    Returns sum of digits of each node from list.
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

void SumDigits(PNODE head)
{
    int iDigit=0, iSum=0, iValue=0;
    
    while (head != NULL)
    {
        iValue=head->data;

        while (iValue>0)
        {
            iDigit = iValue%10;
            iSum=iSum+iDigit;
            iValue=iValue/10;
        }
        printf("%d\t", iSum);

        head = head->next;
        iDigit=0;
        iSum=0;
    }

}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 70);
    InsertFirst(&head, 302);
    InsertFirst(&head, 5220);
    InsertFirst(&head, 4);
    InsertFirst(&head, 30432);
    InsertFirst(&head, 2);
    InsertFirst(&head, 10);

    SumDigits(head);

    return 0;
}