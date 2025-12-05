#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  struprX
//  Description:    Converts the string into upper case.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void struprX(char *str)
{
    while (*str != '\0')
    {
        if ((*str >='a') && (*str<='z'))
        {
            *str=*str-32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    struprX(arr);
    printf("%s\n",arr);

    return 0;
}