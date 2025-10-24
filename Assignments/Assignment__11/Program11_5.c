#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  RangeDisplayRev
//  Description:    Displays the numbers in reverse order in the range accepted by user
//  Input:          Integer, Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt=0;

    if (iEnd<iStart)
    {
        printf("Invalid range");
    }
    
    for(iCnt=iEnd; iCnt>=iStart; iCnt--)
    {
        printf("%d\t",iCnt);
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

    RangeDisplayRev(iValue1,iValue2);

    return 0;
}