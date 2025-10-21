#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  NonFact
//  Description:    Print non-factors of user's input number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int i=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }

    for (i = 1; i < iNo; i++)
    {
        if (iNo % i != 0)
        {
            printf("%d\t",i);
        }
    }   
}

int main()
{
    int iValue=0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);
    
    return 0;
}