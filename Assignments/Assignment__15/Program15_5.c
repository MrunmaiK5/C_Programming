#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountDiff
//  Description:    Returns the difference between the summation of even and odd digits of given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           26/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{
    int iEveSum = 0;
    int iOddSum = 0;
    int iDiff = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iEveSum = iEveSum + iDigit;
        }

        if(iDigit % 2 != 0)
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }
    
    iDiff = iEveSum - iOddSum;

    return iDiff;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time compleity: O(n)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d",iRet);

    return 0;
}