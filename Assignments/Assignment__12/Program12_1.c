#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  print_factor
//  Description:    Display factors of given number in ascending order
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void print_factor(int number)
{
    int iCnt=0;
    if (number<0)
    {
        printf("Invalid input");
    }
    
    for(iCnt=1; iCnt<=(number/2); iCnt++)
    {
        if (number%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
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

    print_factor(number);

    return 0;
}