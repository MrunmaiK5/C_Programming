#include<stdio.h>

int Display()
{
    //logic
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= 5)
    {
        /* code */
        printf("%d\t",iCnt);
        iCnt++;
    }

}

int main()
{

    Display();

    return 0;
}