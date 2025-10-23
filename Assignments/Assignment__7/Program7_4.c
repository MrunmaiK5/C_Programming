#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  OddDisplay
//  Description:    Accepts a number from user and print all odd numbers upto that number
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt=0;
    
    if (iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if (iCnt%2 != 0)
        {
            printf("%d\t",iCnt);
        } 
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}