#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  DisplayConvert
//  Description:    Convert case of input character and display
//  Input:          Character
//  Output:         Character
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue>='a' && CValue <= 'z')
    {
        CValue=CValue-32;
        printf("%c",CValue);
    }
    else if(CValue>='A' && CValue <= 'Z')
    {
        CValue=CValue+32;
        printf("%c",CValue);
    }
}

int main()
{
    char CValue = '\0';

    printf("Enter a character: ");
    scanf("%c",&CValue);

    DisplayConvert(CValue);

    return 0;
}