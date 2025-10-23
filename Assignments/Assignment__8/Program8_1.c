#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Number
//  Description:    Accepts a number from user and print small if number is less than 50 and medium  
//                  if it is greater than 50 and smaller than 100 and large if greater than 100
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           23/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    int iCnt=0;
    if (iNo<=50)
    {
        printf("Small");
    }
    else if(iNo>50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo>100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}