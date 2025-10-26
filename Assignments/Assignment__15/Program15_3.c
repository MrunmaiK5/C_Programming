#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountRange
//  Description:    Displays the count of digits in range of 3 to 7 in the given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           26/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
    int iCnt=0;
    int iDigit=0;

    while (iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit>3 && iDigit<7)
        {
            iCnt=iCnt+1;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return 0;
}