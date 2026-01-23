#include<stdio.h>

void Display(int iNo)
{
    //logic
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

// Time Compllexity : O(N)

int main()
{
    int iValue=0;
    printf("Please enter a number: \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}