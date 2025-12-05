#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  strlwrX
//  Description:    Converts the string into lower case.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void strlwrX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >='A') && (*str<='Z'))
        {
            *str=*str+32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    strlwrX(arr);
    printf("%s\n",arr);

    return 0;
}