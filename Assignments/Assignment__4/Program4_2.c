#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  FactRev
//  Description:    Display factors of given number in decreasing order
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int iFact=iNo-1;
    
    while (iFact>0)
    {
        if (iNo%iFact==0)
        {
            printf("%d\t",iFact);
        }
        iFact--;
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}