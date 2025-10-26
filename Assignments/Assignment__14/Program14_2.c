#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkZero
//  Description:    Checks wether the number from user contains zero or not.
//  Input:          Integer
//  Output:         BOOL
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           25/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo%10;
        if (iDigit==0)
        {
            return TRUE;
        }
        else
        {
            iNo=iNo/10;
        }
    }
    return FALSE;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It cotains zero");
    }
    else
    {
        printf("There is no zero");
    }
    
    return 0;
}