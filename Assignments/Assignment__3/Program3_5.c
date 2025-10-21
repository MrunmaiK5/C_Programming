#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkVowel
//  Description:    Convert case of input character and display
//  Input:          Character
//  Output:         BOOL(integer)
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cChar)
{
    if (cChar == 'a' || cChar == 'e' || cChar == 'i' || cChar == 'o' || cChar == 'u' || 
        cChar == 'A' || cChar == 'E' || cChar == 'I' || cChar == 'O' || cChar == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet= FALSE;

    printf("Enter a character: ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is constant");
    }
}