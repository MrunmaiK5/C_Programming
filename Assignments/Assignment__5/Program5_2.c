#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  FindMax
//  Description:    Find maximum number between two numbers
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           21/10/20025
//
//////////////////////////////////////////////////////////////////////////

int FindMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2, result;

    printf("Enter 1st number: ");
    scanf("%d",&num1);

    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    result = FindMax(num1, num2);

    printf("Maximum is: %d\n",result);

    return 0;
}