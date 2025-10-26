#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Count
//  Description:    Displays the count frequency of digits less than 6 in the given number.
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           25/10/20025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
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
        if (iDigit<6)
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

    iRet = Count(iValue);
    printf("%d\n",iRet);
    
    return 0;
}