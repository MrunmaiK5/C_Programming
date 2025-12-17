#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  DisplayPerfect
//  Description:    Displays all elements which are perfect from singly linked list.
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

void DisplayPerfect(PNODE head)
{
    int iSum = 0, iNo = 0, iCnt = 0;

    while (head != NULL)
    {
        iNo = head -> data;
        iSum = 0;

        for (iCnt = 1; iCnt <= iNo/2; iCnt++)
        {
            if ((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        
        if (iNo == iSum)
        {
            printf("%d\t", iNo);
        }
        head = head -> next;   
    }
}


int main()
{
    PNODE head = NULL;
    
    InsertFirst(&head, 89);
    InsertFirst(&head, 6);
    InsertFirst(&head, 41);
    InsertFirst(&head, 17);
    InsertFirst(&head, 28);
    InsertFirst(&head, 11);

    DisplayPerfect(head);

    return 0;
}