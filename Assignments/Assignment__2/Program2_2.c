#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    print the number of * as the input given by user
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;
    //write updator
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}