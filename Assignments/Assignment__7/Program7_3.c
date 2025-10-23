#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Accepts a number from user and print its number line
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;
    int iNoN=0;
    if (iNo>0)
    {
        iNoN=-iNo;
    }
    if (iNo<0)
    {
        iNo=-iNo;
        iNoN=-iNo;
    }
    for(iCnt=iNoN; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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

    Display(iValue);

    return 0;
}