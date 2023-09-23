#include <stdio.h>

float num1 = 0;
float num2 = 0;

int main()
{
    printf("##########Console-output###\n");
    printf("Enter two numbers: ");
    fflush(stdin);
    scanf("%f", &num1);
    fflush(stdin);
    scanf("%f", &num2);
    printf("Product: %f\n", num1*num2);
    printf("###########################\n");    
    return 0;
}