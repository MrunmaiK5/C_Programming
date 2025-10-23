#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  MultipleDisplay
//  Description:    Accepts a number from user and print first 5 multiples of it
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1; iCnt<=5; iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}