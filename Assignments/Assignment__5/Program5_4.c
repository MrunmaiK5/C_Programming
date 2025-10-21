#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckNumberType
//  Description:    Chechk weather the number is positive zero or negative
//  Input:          Integer
//  Output:         void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           21/10/20025
//
//////////////////////////////////////////////////////////////////////////

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("%d is a positive number",num);
    }
    else if(num < 0)
    {
        printf("%d is a negative number",num);
    }
    else
    {
        printf("the number is a zero");
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}