#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  StrRevX
//  Description:    Reverses the given string(inplace).
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
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

    StrRevX(arr);
    printf("%s\n",arr);

    return 0;
}