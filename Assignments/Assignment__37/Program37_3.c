#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  FirstChar
//  Description:    Returns the first occurence of the given char.
//  Input:          String
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCount=0;
    
    while (*str != '\0')
    {
        iCount++;
        if (ch == *str)
        {
            break;
        }
        str++;
    }
    
    return iCount;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter a string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter a character: ");
    scanf(" %c",&cValue);

    iRet=FirstChar(arr, cValue);
    printf("Index: %d\n",iRet);

    return 0;
}