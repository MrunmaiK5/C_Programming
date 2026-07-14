// iteration
#include<stdio.h>

int CountDigits(int iNo)
{
    int iFrequency=0;
    
    while(iNo!=0)
    {
        iNo=iNo/10;
        iFrequency++;
    }

    return iFrequency;
}

int main()
{
    int iValue = 0;
    int iRet=0;
    printf("\nEnter number: ");
    scanf("%d",&iValue);
    
    iRet=CountDigits(iValue);

    printf("Count of digits is: %d\n",iRet);
    
    return 0;
}