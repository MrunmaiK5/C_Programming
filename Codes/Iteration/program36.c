#include<stdio.h>

void Display(int iNo)
{
    //logic
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        /* code */
        printf("%d\t",iCnt);
    }

}

int main()
{

    Display(7);

    return 0;
}