#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkSmall
//  Description:    Chechks whether accepted character is in small case or not.
//  Input:          Character
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           01/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    BOOL bFlag=FALSE;

    if ((ch >='a') && (ch<='z'))
    {
        bFlag=TRUE;
    }

    return bFlag;
}

int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("Enter a character: ");
    scanf("%c",&cValue);

    bRet=ChkSmall(cValue);

    if (bRet==TRUE)
    {
        printf("It is a small case character\n");
    }
    else
    {
        printf("It is not a small case character\n");
    }

    return 0;
}