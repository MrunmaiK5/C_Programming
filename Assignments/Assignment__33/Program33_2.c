#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkCapital
//  Description:    Chechks whether accepted character is capital character or not.
//  Input:          Character
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           01/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    BOOL bFlag=FALSE;

    if ((ch >='A') && (ch<='Z'))
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

    bRet=ChkCapital(cValue);

    if (bRet==TRUE)
    {
        printf("It is a capital character\n");
    }
    else
    {
        printf("It is not a capital character\n");
    }

    return 0;
}