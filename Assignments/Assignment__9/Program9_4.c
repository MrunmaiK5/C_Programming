#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  OddFactorial
//  Description:    Finds the odd factorial of given number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iFact=1;
    int iCnt=0;

    if (iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
        if (iCnt%2!=0)
        {
            iFact=iFact*iCnt;
        }
    }

    return iFact;
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

    iRet=OddFactorial(iValue);
    printf("Factorial of %d is: %d\n",iValue,iRet);
    return 0;
}