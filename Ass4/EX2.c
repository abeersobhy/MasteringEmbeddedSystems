#include <stdio.h>

int Factorial(int num);

int num, fact;
int main()
{
    printf("Enter an positive number: ");
    scanf("%d", &num);
    fact = Factorial(num);
    printf("Factorial of %d = %d", num, fact);
    return 0;
}
int Factorial(int num)
{
    if(num != 1)
    {
        return num*Factorial(num-1);
    }
    else
    {
        return num;
    }
}