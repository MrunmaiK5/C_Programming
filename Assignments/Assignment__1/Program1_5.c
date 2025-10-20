#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  Accept
//  Description:    print the number of * as the input given by user
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           19/10/20025
//
//////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt<= iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue=0;
    iValue=5;

    Accept(iValue);

    return 0;
}