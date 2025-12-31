#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  DisplayGreaterThanAvg
//  Description:    Displays elements greater than the average.
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

int Count(PNODE head)
{
    int iCount=0;

    while (head != NULL)
    {
        iCount++;
        head=head->next;
    }
    
    return iCount;
}

void DisplayGreaterThanAvg(PNODE head)
{
    int iCount=0, iCnt=0, iSum=0;
    float fAvg=0.0f;

    PNODE temp = head;

    iCount = Count(head);

    if(iCount < 1)
    {
        printf("List is empty\n");
        return;
    }

    for (iCnt=1; iCnt<=iCount; iCnt++)
    {
        iSum=iSum+temp->data;
        temp=temp->next;
    }

    fAvg = (float)iSum/iCount;
    
    while (head != NULL)
    {
        if (head->data > fAvg)
        {
            printf("%d\t", head->data); 
        }

        head=head->next;
    }
    printf("\n");
}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    DisplayGreaterThanAvg(head);

    return 0;
}