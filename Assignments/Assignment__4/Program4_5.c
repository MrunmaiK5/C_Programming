#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  FactDiff
//  Description:    Display difference between summation of all its factors and non-factors
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{

    int iCnt=0;
    int iFactSum = 0;
    int iNonFactSum = 0;
    int iDiff=0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo%iCnt != 0)
        {
            iNonFactSum=iNonFactSum+iCnt; 
        } 
        else if (iNo%iCnt==0)
        {
            iFactSum=iFactSum+iCnt;
        }
    }

    iDiff=iFactSum-iNonFactSum;

    return iDiff;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference: %d",iRet);  
    return 0;
}