#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  is_divisible_by_five
//  Description:    Checks wether the given number is divisible by 5.
//  Input:          Integer
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

bool is_divisible_by_five(int number)
{
    bool bAns=false;

    if (number%5 == 0)
    {
        bAns = true;
    }
    else
    {
        bAns=false;
    }
    
    return bAns;
}

int main()
{
    int number=0;

    printf("Enter a number: ",&number);
    scanf("%d",&number);

    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");
    return 0;
}