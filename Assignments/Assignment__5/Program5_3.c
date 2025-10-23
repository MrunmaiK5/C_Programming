#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckLeapYear
//  Description:    Find whether the given year is leap year or not
//  Input:          Integer
//  Output:         void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           21/10/20025
//
//////////////////////////////////////////////////////////////////////////

void CheckleapYear(int year)
{
    if ((year%4) == 0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
}

int main()
{
    int yr;

    printf("Enter year: ");
    scanf("%d",&yr);

    CheckleapYear(yr);

    return 0;
}
