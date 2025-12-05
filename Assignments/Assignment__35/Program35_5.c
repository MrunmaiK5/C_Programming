#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Reverse
//  Description:    Reverses the givenn string.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

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
    
}

int main()
{
    char arr[20];


    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    Reverse(arr);

    return 0;
}