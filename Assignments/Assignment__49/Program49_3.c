#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  DisplayDivByThree
//  Description:    Displays elements divisible by three.
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

void DisplayDivByThree(PNODE head)
{
    while (head != NULL)
    {
        if (head->data % 3 == 0)
        {
            printf("%d\t",head->data);
        }

        head=head->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 70);
    InsertFirst(&head, 37);
    InsertFirst(&head, 57);
    InsertFirst(&head, 45);
    InsertFirst(&head, 30);
    InsertFirst(&head, 22);
    InsertFirst(&head, 10);

    DisplayDivByThree(head);
    
    return 0;
}