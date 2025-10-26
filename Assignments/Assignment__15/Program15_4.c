#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  MultDigits
//  Description:    Displays the multiplication of all digits of the given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           26/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigits(int iNo)
{
    int iMul=1;
    int iDigit=0;

    while (iNo != 0)
    {
        iDigit=iNo%10;
        if (iDigit == 0)
        {
            iMul=iMul*1;
        }
        else
        {
            iMul=iMul*iDigit;
        }
        
        iNo=iNo/10;
    }
    return iMul;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return 0;
}