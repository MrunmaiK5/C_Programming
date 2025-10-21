#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckEvenOdd
//  Description:    Check given number is even or odd
//  Input:          Integer
//  Output:         void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           21/10/20025
//
//////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if (num%2 == 0)
    {
        printf("It is an even number\n");
    }
    else
    {
        printf("It is an odd number\n");
    }
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}