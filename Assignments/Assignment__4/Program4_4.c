#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  SumNonFact
//  Description:    Display summation of non-factors of given number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iSum = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo%iCnt != 0)
        {
            iSum=iSum+iCnt; 
        } 
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    
    printf("%d\n",iRet);

    return 0;
}