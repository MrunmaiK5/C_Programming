#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  StrCpyRevX
//  Description:    Copies character of given string in new string in reverse order.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyRevX(char *src, char *dest)
{
    char *start = src;
    char *end = src;

    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20], brr[20];


    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    StrCpyRevX(arr, brr);
    printf("%s\n",brr);

    return 0;
}