#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Percentage
//  Description:    Accepts total marks and total marks obtained and calculate percentage
//  Input:          Integer, Integer
//  Output:         Float
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           24/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fPercent=1.0;
    if (iNo1==0)
    {
        return 0.0;
    }
    else
    {
        fPercent=(((float)iNo2/(float)iNo1)*100);
        return fPercent;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(1)
//
//////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0, iValue2=0;
    float fRet=0.0;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);
    
    printf("Please enter total obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is: %f",fRet);
    
    return 0;
}