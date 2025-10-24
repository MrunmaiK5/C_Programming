#include<stdio.h>
#define PI 3.14
///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CircleArea
//  Description:    Caclculates the area of circle by taking its radius as input
//  Input:          Float
//  Output:         Double
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
   
    double dArea=1;

    dArea = (PI*fRadius*fRadius);

    return dArea;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter radius of a circle: ");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area of a circle is: %lf", dRet);
    return 0;
}