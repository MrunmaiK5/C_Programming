#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  DisplayDigit
//  Description:    Displays the digits from the string.
//  Input:          String
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= '0') && (*str <= '9') )
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    DisplayDigit(arr);
   
    return 0;
}