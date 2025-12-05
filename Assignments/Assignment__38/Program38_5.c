#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  StrCpyToggle
//  Description:    Copies character of given string while converting characters in toggle case.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *src = *src + 32;
        }
        else if (*src >= 'a' && *src <= 'z')
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

    StrCpyToggle(arr, brr);
    printf("%s\n",brr);

    return 0;
}