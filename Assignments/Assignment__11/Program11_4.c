#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  RangeSumEven
//  Description:    Calculates the sum of all the numbers in the range provided by the user
//  Input:          Integer, Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if (iEnd<0 || iStart<0 || iEnd<iStart)
    {
        printf("Invalid range");
        
    }
    else
    {
        for(iCnt=iStart; iCnt<=iEnd; iCnt++)
        {
            if(iCnt%2 == 0)
            {
                iSum=iSum+iCnt;
            }
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
    int iValue1=0, iValue2=0;
    int iRet=0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet=RangeSumEven(iValue1,iValue2);
    if (iRet > 0)
    {
        printf("Sum is: %d",iRet);
    }

    return 0;
}