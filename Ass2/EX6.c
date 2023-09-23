#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;
    int i = 0;
    printf("Enter an integer number : ");
    scanf("%d", &number);
    for(i = 1 ; i <= number ; i++)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}