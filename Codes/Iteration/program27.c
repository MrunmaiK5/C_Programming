#include<stdio.h>

//Dynamic function
void Display(int iFreq)
{
    int iCnt=0;
    //filter
    if(iFreq <0){
        printf("Invalid Inout");
    }

    for (iCnt=1; iCnt<=iFreq; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main() 
{
    int iCount = 0;
    printf("Enter the frequency: \n");
    scanf("%d",&iCount);

    Display(iCount);  
    
    return 0;
}