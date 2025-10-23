#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Accepts a single digit number from user and print it in word form
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    if (iNo==0)
    {
        printf("zero");
    }
    else if(iNo==1)
    {
        printf("one");
    }
    else if(iNo==2)
    {
        printf("two");
    }
    else if(iNo==3)
    {
        printf("three");
    }
    else if(iNo==4)
    {
        printf("four");
    }
    else if(iNo==5)
    {
        printf("five");
    }
    else if(iNo==6)
    {
        printf("six");
    }
    else if(iNo==7)
    {
        printf("seven");
    }
    else if(iNo==8)
    {
        printf("eight");
    }
    else if(iNo==9)
    {
        printf("nine");
    }
    else
    {
        printf("Invalid number");
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}