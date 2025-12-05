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

int CountWhite(char *str)
{
    int iCount=0;
    while (*str != '\0')
    {
        if ((*str == ' ') )
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet=0;
    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    iRet=CountWhite(arr);
    printf("Count: %d",iRet);
   
    return 0;
}