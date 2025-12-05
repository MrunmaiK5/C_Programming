#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Reverse
//  Description:    Reverses the given string.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *temp=str;

    while (*str != '\0')
    {
        str++;
    }
    
    while (str > temp)
    {
        printf("%c",*str);
        str--;
    }
    
    printf("\n");
}

int main()
{
    char arr[20];


    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    Reverse(arr);

    return 0;
}