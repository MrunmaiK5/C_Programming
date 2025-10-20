#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  Check
//  Description:    Check if divisible by 5
//  Input:          Integer
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           19/10/20025
//
//////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if (iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}