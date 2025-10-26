#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountTwo
//  Description:    Displays the count frequency of 2 in the given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           25/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCount=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo%10;
        if (iDigit==2)
        {
            iCount = iCount + 1;
        }
        
        iNo=iNo/10;
    }
    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Time Complexity: O(n)
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);
    printf("%d\n",iRet);
    
    return 0;
}