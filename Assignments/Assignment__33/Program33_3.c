#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkDigit
//  Description:    Chechks whether accepted character is digit or not.
//  Input:          Character
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           01/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    BOOL bFlag=FALSE;

    if ((ch >='0') && (ch<='9'))
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

    bRet=ChkDigit(cValue);

    if (bRet==TRUE)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }

    return 0;
}