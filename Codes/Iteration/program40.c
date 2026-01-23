#include<stdio.h>

void Display(int iNo)
{
    //logic
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue=0;
    printf("Please enter a number: \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}