#include <stdio.h>

int main()
{
    int number = 0;
    int fact = 1;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if(number < 0)
    {
        printf("There is no factorial to negative number");
    }
    else
    {
        for(int i = 1; i < number ; i++)
        {
            fact *= i;
        }  
        printf("Factorial of %d = %d", number, fact);
    }
    return 0;
}