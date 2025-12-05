#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkChar
//  Description:    Chechks whether the string contains given character.
//  Input:          String
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag=FALSE;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    
    return bFlag;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter a string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter a character: ");
    scanf(" %c",&cValue);

    bRet=ChkChar(arr, cValue);

    if (bRet==TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}