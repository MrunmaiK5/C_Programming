#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkAlpha
//  Description:    Chechks whether accepted character is alphabet or not.
//  Input:          Character
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           29/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    BOOL bFlag=FALSE;

    if ((ch >='a' && ch <='z') || (ch >='A' && ch<='Z'))
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

    bRet=ChkAlpha(cValue);

    if (bRet==TRUE)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}