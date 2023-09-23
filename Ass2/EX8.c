#include <stdio.h>

int main()
{
    int number1 = 0;
    int number2 = 0;
    char op = 0;
    printf("Enter 2 integer numbers : ");
    scanf("%d", &number1);
    fflush(stdin);
    scanf("%d", &number2);
    printf("Enter the operand : ");
    fflush(stdin);
    scanf("%c", &op);
    switch (op)
    {
        case '+':
        printf("%d + %d = %d",number1, number2, number1+number2);
        break;
        case '-':
        printf("%d - %d = %d",number1, number2, number1-number2);
        break;
        case '*':
        printf("%d * %d = %d",number1, number2, number1*number2);
        break;
        case '/':
        printf("%d / %d = %d",number1, number2, number1/number2);
        break;
        default:
        break;
    }
    return 0;
}