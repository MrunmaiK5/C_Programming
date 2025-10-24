#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  FhtoCs
//  Description:    Converts the temperature in Fahrenheit to Celcius.
//  Input:          Float
//  Output:         Double
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCs=0.0;
    
    dCs=((fTemp-32)*(5.0/9.0));

    return dCs;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("Temperature in Celcius: %lf",dRet);

    return 0;
}