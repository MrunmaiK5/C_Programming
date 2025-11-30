#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  DisplaySchedule
//  Description:    Displays the exam timings to the students according to their division.
//  Input:          Character
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           01/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    if (ch =='A')
    {
        printf("Your exam is at 7 AM\n");
    }
    else if (ch =='B')
    {
        printf("Your exam is at 8:30 AM\n");
    }
    else if (ch =='C')
    {
        printf("Your exam is at 9:20 AM\n");
    }
    else if (ch =='D')
    {
        printf("Your exam is at 10:30 AM\n");
    }
    else
    {
        printf("Enter the correct division\n");
    }
}

int main()
{
    char cValue='\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}