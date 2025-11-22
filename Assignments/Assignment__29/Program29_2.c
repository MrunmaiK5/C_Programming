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
    int i=0,j=0, iNo1=0, iNo2=0;

    for(i=1; i<=iRow; i++)
    {
        for(j=1, iNo1=1, iNo2=2; j<=iCol; j++)
        {
            if (i%2==0)
            {
                printf("%d\t",iNo1);
                iNo1=iNo1+2;
            }
            else
            {
                printf("%d\t",iNo2);
                iNo2=iNo2+2;
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