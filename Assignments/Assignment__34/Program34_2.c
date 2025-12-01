#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays the the capital letter if given character is in small case and vice versa.
//  Input:          Character
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           01/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if ((ch >='A') && (ch<='Z'))
    {
        ch=ch+32;
        printf("%c",ch);
    }
    else if ((ch >='a') && (ch<='z'))
    {
        ch=ch-32;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue='\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}