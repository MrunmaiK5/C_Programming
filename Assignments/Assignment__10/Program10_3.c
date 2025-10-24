#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  KMtoMeter
//  Description:    Converts the distance in Kilometer to Meter.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iKM=0;

    iKM=iNo*1000;

    return iKM;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter the distance:");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("Distance in meter: %d",iRet);
    
    return 0;
}