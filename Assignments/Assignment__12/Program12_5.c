#include<stdio.h>
#include<stdbool.h>

bool is_divisible_by_five(int number)
{
    bool bAns=false;

    if (number%5 == 0)
    {
        bAns = true;
    }
    else
    {
        bAns=false;
    }
    
    return bAns;
}

int main()
{
    int number=0;

    printf("Enter a number: ",&number);
    scanf("%d",&number);

    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");
    return 0;
}