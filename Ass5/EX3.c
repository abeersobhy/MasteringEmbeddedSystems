#include <stdio.h>

typedef struct 
{
    float real;
    float imaginary;
}SComplexNumber;

void SumOfComplex(SComplexNumber* num1, SComplexNumber* num2);
int main()
{
    SComplexNumber num1, num2;
    printf("For 1st complex number,\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f", &num1.real);
    fflush(stdin);
    scanf("%f", &num1.imaginary);
    printf("For 2st complex number,\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f", &num2.real);
    fflush(stdin);
    scanf("%f", &num2.imaginary);
    SumOfComplex(&num1, &num2);
}
void SumOfComplex(SComplexNumber* num1, SComplexNumber* num2)
{
    float realPart = num1->real + num2->real;
    float imaginaryPart = num1->imaginary + num2->imaginary;
    printf("Sum = %.2f + %.2fi", realPart, imaginaryPart);
}