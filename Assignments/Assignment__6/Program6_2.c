#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckGreator
//  Description:    If given number is greator than 100 diplay greater or display smaller
//  Input:          Integer
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreator(int iNo)
{
    if (iNo > 100)
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
    int iValue=0;
    bool bRet=false;

    printf("Please enter a number: ");
    scanf("%d",&iValue);

    bRet = ChkGreator(iValue);

    if (bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
    return 0;
}