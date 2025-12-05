#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  StrCpyCapX
//  Description:    Copies character of given string while converting small characters into capital.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyCapX(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
        {
            *src = *src - 32;
        }
        
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Mravellous Pyton 2";
    char brr[30];

    StrCpyCapX(arr, brr);
    printf("%s\n",brr);

    return 0;
}