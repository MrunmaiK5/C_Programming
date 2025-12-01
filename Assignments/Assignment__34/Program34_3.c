#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Displays the letters from the entered input till z if its in capital case 
//                  else prints letters in reverse order till a.
//  Input:          Character
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           01/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt=0;

    if ((ch >='A') && (ch<='Z'))
    {
        for(iCnt=ch; iCnt<='Z'; iCnt++, ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if ((ch >='a') && (ch<='z'))
    {
        for(iCnt=ch; iCnt>='a'; iCnt--, ch--)
        {
            printf("%c\t",ch);
        }
    }
    else
    {
        printf("%c\t",ch);
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