#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  SquareMeter
//  Description:    Converts the area in squre feet into square meter.
//  Input:          Float
//  Output:         Double
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dSM=0.0;

    dSM=(iValue*0.0929);

    return dSM;
}

int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("Area in square meter: %lf",dRet);

    return 0;
}