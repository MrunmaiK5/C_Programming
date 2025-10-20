#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  PrintEven
//  Description:    Print factors till user's input number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i=0;
    if (iNo<0)
    {
        iNo=-iNo;
    }

    for (i = 1; i <= (iNo/2); i++)
    {
        if (iNo % i == 0)
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

    DisplayFactor(iValue);
    
    return 0;
}