/*
    START
        Accept number and store as No
        Divide No by 2
        IF the remainder is 0
            then dislpay as EVEN
        OTHERWISE
            display as ODD
    STOP

*/


#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem=0;
    iRem=iNo%2;
    if(iRem==0)
    {
        printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}