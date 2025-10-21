#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  FindLargest
//  Description:    Find largest number between three numbers
//  Input:          Integer
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           21/10/20025
//
//////////////////////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a, b, c, result;

    printf("Enter 1st number: ");
    scanf("%d",&a);

    printf("Enter 2nd number: ");
    scanf("%d",&b);

    printf("Enter 3rd number: ");
    scanf("%d",&c);

    result = FindLargest(a, b, c);

    printf("Largest is: %d\n",result);

    return 0;
}