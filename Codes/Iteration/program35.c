#include<stdio.h>

void Display()
{
    //logic
    int iCnt = 0;

    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        /* code */
        printf("%d\t",iCnt);
    }

}

int main()
{

    Display();

    return 0;
}