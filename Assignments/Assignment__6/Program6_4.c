#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Multiply
//  Description:    Accepts three numbers and displays its multiplication
//  Input:          Integer, Integer, Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul=1;

    if (iNo1!=0)
    {
        iMul=(iMul*iNo1);
    }
    if (iNo2!=0)
    {
        iMul=(iMul*iNo2);
    }
    if (iNo3!=0)
    {
        iMul=(iMul*iNo3);
    }

    if (iNo1 ==0 && iNo2 == 0 && iNo3 == 0)
    {
        iMul=(iNo1*iNo2*iNo3);
        return 0;
    }

    return iMul;
    
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0, iValue3=0;
    int iRet=0;

    printf("Please enter 3 number: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is: %d",iRet);
    
    return 0;
}