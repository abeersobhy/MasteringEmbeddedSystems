#include <stdio.h>

float a = 0;
float b = 0;

int main()
{
    printf("##########Console-output###\n");
    printf("Enter value of a: ");
    fflush(stdin);
    scanf("%f", &a);
    fflush(stdin);
    printf("Enter value of b: ");
    scanf("%f", &b);
    a = a + b; 
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %f\n", a);
    printf("After swapping, value of b = %f\n", b);
    printf("###########################\n");    
    return 0;
}