#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkVowel
//  Description:    Checks wether the given character is vowel or not.
//  Input:          Character
//  Output:         BOOL
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char cVal)
{
    if (cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' || cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
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
    BOOL bRet = FALSE;

    printf("Enter a character: ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == 1)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not a vowel");
    }

    return 0;
}