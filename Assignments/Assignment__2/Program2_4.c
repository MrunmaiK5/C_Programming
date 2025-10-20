#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    accept 2 numbers and print first number in second number of times 
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
/////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt=0;

    for (iCnt=1; iCnt<=iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
    
}

int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);
    
    printf("Enter freuency: ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}
