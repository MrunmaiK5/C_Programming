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
    Display the assition on screen
Stop
*/

//////////////////////////////////////////////////////////////////////////
//   Required header files
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  AdditionTwoNumbers
//  Description:    It is used to perorm addition
//  Input:          float, float
//  Output:         float
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           09/10/20025
//
//////////////////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////////////////
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

//////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the aplication
//  Input1:10.5         Input2:3.2          Output:13.7
//  Input1:-10.5        Input2:3.2          Output:13.7
//  Input1:10.5         Input2:-3.2         Output:13.7
//  Input1:-10.5        Input2:-3.2         Output:13.7
//  Input1:10.5         Input2:0.0          Output:10.5
//
//////////////////////////////////////////////////////////////////////////