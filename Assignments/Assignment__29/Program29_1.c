#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name:  Pattern
//  Description:    Displays a pattern.
//  Input:          Integer
//  Output:         Void
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           22/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i=0,j=0, iNo=0;

    iNo=1;
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++, iNo++)
        {
            if (iNo > 9)
            {
                iNo = 1;
                printf("%d\t",iNo);
            }
            else
            {
                printf("%d\t",iNo);
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1=0, iValue2=0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}