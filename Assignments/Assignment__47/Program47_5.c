#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountPrime
//  Description:    Counts prime numbers from list.
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

int CountPrime(PNODE head)
{
    int iValue=0, iCnt=0, iCount=0;
    
    while (head != NULL)
    {
        iValue=head->data;

        for (iCnt=2; iCnt<iValue; iCnt++)
        {
            if (iValue%iCnt == 0)
            {
                break;
            }
        }
        
        if (iCnt>=iValue)
        {
            iCount++;
        }

        head = head->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 501);
    InsertFirst(&head, 43);
    InsertFirst(&head, 17);
    InsertFirst(&head, 21);
    InsertFirst(&head, 111);

    iRet=CountPrime(head);
    printf("Count: %d\n",iRet);
    return 0;
}