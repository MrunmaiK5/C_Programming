#include<stdio.h>

//////////////////////////////////////////////////////////////////////////
//
//  Function name:  Display
//  Description:    Display 5 to 1 numbers on screen 
//  Input:          None
//  Output:         Integer
//  Author:         Mrunmai Jitendra Khadpe
//  Date:           19/10/20025
//
//////////////////////////////////////////////////////////////////////////

void Display()
{
    int i=0;
    i = 5;
    while (i>=1)
    {
       printf("%d\n",i);
       i--;
    }  
}

int main()
{
    Display();
    
    return 0;
}