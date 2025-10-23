#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  DollarToInr
//  Description:    Accepts Amounts in US dollars and return its corresponding indian currency
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToInr(int iNo)
{
    int iInr=0;

    iInr=(70*iNo);
    return iInr;
}

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter a number: ");
    scanf("%d",&iValue);

    iRet=DollarToInr(iValue);

    printf("Indian currency is: %d", iRet);

    return 0;
}