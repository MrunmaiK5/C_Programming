/////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                       //for input output
#include<stdbool.h>                     //for bool datatype


/////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CheckEvenOdd
//  Description:    it is used to check even odd
//  Input:          integer
//  Output:         boolean
//  Author:         Mrumai jitendra khadpe
//  Date:           10/10/2025
//
/////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem=0;
    iRem=iNo%2;
    if(iRem==0)
    {   return true;    }
    else
    {   return false;   }
}

/////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet == true)
    {    printf("%d is Even number",iValue);    }
    else
    {    printf("%d is Odd number",iValue);     }
    return 0;
}

