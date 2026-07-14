// iteration
#include<stdio.h>

int main()
{
    int iNo = 0;
    int iDigit=0;
    
    printf("Enter number: ");
    scanf("%d",&iNo);
    
    printf("-----------------------------------------------------------\n");
    printf("original value of iNo is: %d\n",iNo);

    while(iNo!=0)
    {
        printf("-----------------------------------------------------------\n");
        iDigit=iNo%10;
        printf("iDigit is: %d\n",iDigit);
        iNo=iNo/10;
        printf("iNo is: %d\n",iNo);
    }

    return 0;
}