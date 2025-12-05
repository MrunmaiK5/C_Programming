#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Difference
//  Description:    Calculates difference between frequency of small charcters and capital 
//                  from given string.
//  Input:          String
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           05/12/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCntCapital=0, iCntSmall=0;

    while (*str != '\0')
    {
        if ((*str >='a') && (*str<='z'))
        {
            iCntSmall++;
        }
        else if ((*str >='A') && (*str<='Z'))
        {
            iCntCapital++;
        }
        str++;
    }
    
    return (iCntSmall-iCntCapital);
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter a string: ");
    scanf("%[^'\n']",arr);

    iRet=Difference(arr);
    printf("%d",iRet);

    return 0;
}