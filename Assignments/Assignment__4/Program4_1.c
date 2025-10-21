#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  MultiFact
//  Description:    Display multiplication of factors of given number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iMul = 1;
    for (iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if (iNo%iCnt == 0)
        {
            iMul=iMul*iCnt; 
        } 
    }
    return iMul;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    
    printf("%d\n",iRet);

    return 0;
}