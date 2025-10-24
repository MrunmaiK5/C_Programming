#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  count_factor
//  Description:    Display count of factors of given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int count_factor(int number)
{
    int iCnt=0;
    int count=0;
    if (number<0)
    {
        printf("Invalid input");
    }
    
    for(iCnt=1; iCnt<=(number/2); iCnt++)
    {
        if (number%iCnt==0)
        {
            count=count+1;
        }
    }

    return count;
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

    printf("%d\n",count_factor(number));

    return 0;
}