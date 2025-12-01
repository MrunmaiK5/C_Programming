#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkSpecial
//  Description:    Chechks whether accepted character is a special character or not.
//  Input:          Character
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           29/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    BOOL bFlag=FALSE;

    if ((ch =='!') || (ch =='@') || (ch =='#') || (ch =='$') 
        || (ch =='%') || (ch =='^') || (ch =='&') || (ch =='*'))
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

    bRet=ChkSpecial(cValue);

    if (bRet==TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }

    return 0;
}