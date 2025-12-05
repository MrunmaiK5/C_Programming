#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  CountCapital
//  Description:    Counts the number of small charcers from given string.
//  Input:          String
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCnt=0;

    while (*str != '\0')
    {
        if ((*str >='a') && (*str<='z'))
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    iRet=CountCapital(arr);
    printf("%d",iRet);

    return 0;
}