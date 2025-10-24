#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  sum_of_even_factor
//  Description:    Display sum of factors of given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int iCnt=0;
    int iSum=0;
    if (number<0)
    {
        printf("Invalid input");
    }
    
    for(iCnt=1; iCnt<=(number/2); iCnt++)
    {
        if (number%iCnt==0 && iCnt%2==0)
        {
            iSum=iSum+iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n/2)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    printf("%d\n",sum_of_even_factors(number));

    return 0;
}