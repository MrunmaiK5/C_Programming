#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  FactorialDiff
//  Description:    Finds difference between the even and odd factorial of given number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iOddFact=1;
    int iEvenFact=1;
    int iDiff=0;
    int iCnt=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
        if (iCnt%2!=0)
        {
            iOddFact=iOddFact*iCnt;
        }
        if(iCnt%2==0)
        {
            iEvenFact=iEvenFact*iCnt;
        }
    }

    iDiff=iEvenFact-iOddFact;
    
    return iDiff;
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
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);
    printf("Difference between Factorial is: %d\n",iRet);
    return 0;
}