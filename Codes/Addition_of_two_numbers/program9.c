/*
step 1:understand the problem statement 
step 2:write the algorithm
step 3:decide the programming laanguage
step 4:write program
step 5:test program
*/

/*
Start
    Accept 1st number as No1
    Accept 2nd number as No2
    if the input is negative then convert it into positive
    Perform addition of No1 and No2
    Display the addition on screen
Stop
*/

#include<stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2){
    float fSum=0.0f;

    //Updator
    if(fNo1 < 0.0f){
        fNo1=-fNo1;
    }
    
    //Updator
    if(fNo2 < 0.0f){
        fNo2=-fNo2;
    }

    fSum=fNo1+fNo2;//Business logic
    return fSum;
}

int main()
{
    float fValue1=0.0f, fValue2=0.0f, fRet=0.0f;
    
    printf("Enter first number: \n");
    scanf("%f", &fValue1);

    printf("Enter second number: \n");
    scanf("%f", &fValue2);

    fRet=AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition is: %f\n ",fRet);

    return 0;
}

