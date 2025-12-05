#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  ChkVowel
//  Description:    Chechks whether the string contains vowel or not.
//  Input:          String
//  Output:         Boolean
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char *str)
{
    BOOL bFlag=FALSE;
    
    while (*str != '\0')
    {
        if ((*str =='a') || (*str =='e') || (*str =='i') || (*str =='o') || (*str =='u') 
            || (*str =='A') || (*str =='E') || (*str =='I') || (*str =='O') || (*str =='U'))
        {
            bFlag=TRUE;
        }
        str++;
    }
    

    return bFlag;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter a string: ");
    scanf("%[^'\n']s",arr);

    bRet=ChkVowel(arr);

    if (bRet==TRUE)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no vowel\n");
    }

    return 0;
}