#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountEven
//  Description:    Displays the count of even digits in the given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           26/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iFreq=0;
    int iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if (iDigit%2==0)
        {
            iFreq=iFreq+1;
        }
        iNo=iNo/10;
    }
    return iFreq;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("Count : %d\n",iRet);

    return 0;
}