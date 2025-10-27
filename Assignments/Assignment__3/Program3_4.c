#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  DisplayConvert
//  Description:    Converts the case og given character
//  Input:          Character
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           20/10/20025
//
//////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    char cTemp='\0';

    if (CValue >= 'a' && CValue <= 'z')
    {
        cTemp = CValue - 32;
        printf("%c\n",cTemp);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        cTemp = CValue + 32;
        printf("%c\n",cTemp);
    } 
}

int main()
{
    char cValue='\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}