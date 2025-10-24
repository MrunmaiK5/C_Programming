#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  RectArea
//  Description:    Caclculates the area of rectangle by taking its width and height as input
//  Input:          Float, Float
//  Output:         Double
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{
    double dArea=1;

    dArea = (fWidth*fHeight);

    return dArea;
}

int main()
{
    float fValue1=0.0, fValue2=0.0;
    double dRet=0.0;

    printf("Enter width: ");
    scanf("%f",&fValue1);

    printf("Enter height: ");
    scanf("%f",&fValue2);

    dRet=RectArea(fValue1,fValue2);
    printf("Area of a rectangle is: %lf", dRet);
    return 0;
}