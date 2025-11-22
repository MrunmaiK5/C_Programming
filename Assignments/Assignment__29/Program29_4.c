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
    int i=0,j=0;

    for(i=1; i<=iRow; i++)
    {
        if(i%2 == 0)
        {
            for(j=-1; j>=-iCol; j--)
            {
                printf("%d\t",j);
            }  
            printf("\n");
        }
        else
        {
            for(j=1; j<=iCol; j++)
            {
                printf("%d\t",j);
            }
            printf("\n");
        }
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