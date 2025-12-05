#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  strtoggleX
//  Description:    Converts the string into toggle case.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void strtoggleX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >='a') && (*str<='z'))
        {
            *str=*str-32;
        }
        else if ((*str >='A') && (*str<='Z'))
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

    strtoggleX(arr);
    printf("%s\n",arr);

    return 0;
}