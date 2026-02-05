//Input=12 2    output: true
//Input=12 3    output: false
//Input=12 12   output: true
//Input=12 7    output: false

#include<stdio.h>

// Time Compllexity : O(N/2)

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter first no.: ");
    scanf("%d",&iValue1);

    printf("Enter second no.: ");
    scanf("%d",&iValue2);

    if((iValue1%iValue2) == 0){
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
    }
    return 0;
}