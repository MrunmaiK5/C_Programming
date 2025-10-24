#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  sum_natural_number
//  Description:    Calculates sum of N natural numbers.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int sum_natural_number(int limit)
{
    int iCnt=0;
    int iSum=0;
    if(limit<0)
    {
        printf("invalid input");
    }
    else
    {
        for(iCnt=1; iCnt<=limit; iCnt++)
        {
            iSum=iSum+iCnt;
        }
    }
    
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d",&limit);

    printf("%d\n",sum_natural_number(limit));

    return 0;
}