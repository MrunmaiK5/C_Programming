#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  PruntEven
//  Description:    Print even numbers of the number given by user
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;

    for (iCnt = 2; iCnt <= (iNo*2); iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);  
    }
    
}

int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}