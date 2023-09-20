#include <stdio.h>

int main()
{
    int number = 0;
    printf("Enter an integer number you want to check : ");
    scanf("%d", &number);
    if(number == 0)
    {
        printf("%d is zero.", number);
    }
    else if(number > 0)
    {
        printf("%d is positive.", number);
    }
    else
    {
        printf("%d is negative.", number);
    }
    return 0;
}