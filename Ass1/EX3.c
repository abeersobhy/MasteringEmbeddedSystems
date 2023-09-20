#include <stdio.h>

int main()
{
    float number1 = 0;
    float number2 = 0;
    float number3 = 0;
    printf("Enter 3 integer numbers you want to check : ");
    scanf("%f", &number1);
    fflush(stdin);
    scanf("%f", &number2);
    fflush(stdin);
    scanf("%f", &number3);
    (number1 > number2) ? ((number1 > number3) ? printf("Largest number = %f", number1) : printf("Largest number = %f", number3)) :  ((number2 > number3) ? printf("Largest number = %f", number2) : printf("Largest number = %f", number3));
    return 0;
}