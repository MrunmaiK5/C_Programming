#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Chek if number is even or odd
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
/////////////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    if (iNo % 2 == 0)
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

    bRet = ChkEven(iValue);

    if (bRet == true)
    {
        printf("The %d is even number",iValue);
    }
    else
    {
        printf("The %d is odd number",iValue);
    }
    
    return 0;
}
