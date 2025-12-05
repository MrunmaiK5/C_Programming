#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  StrCpySmall
//  Description:    Copies character of given string while converting capital characters into small.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *src = *src + 32;
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

    StrCpySmall(arr, brr);
    printf("%s\n",brr);

    return 0;
}