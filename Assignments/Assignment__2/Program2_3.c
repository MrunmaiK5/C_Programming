#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    print Hello if the number is less than 10 or else Demo
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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