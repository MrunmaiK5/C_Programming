#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckEqual
//  Description:    Dhecks whether given two numbers are equal or not
//  Input:          Integer, Integer
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0;
    bool bRet=false;

    printf("Please enter 2 number: ");
    scanf("%d %d",&iValue1,&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }
    
    return 0;
}