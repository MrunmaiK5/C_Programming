#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  RangeDisplayEven
//  Description:    Displays the even numbers in the range accepted by user
//  Input:          Integer, Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt=0;

    if (iEnd<iStart)
    {
        printf("Invalid range");
    }
    
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0;
    
    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}