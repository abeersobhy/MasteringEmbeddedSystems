#include <stdio.h>

int num1 = 0;
int num2 = 0;

int main()
{
    printf("##########Console-output###\n");
    printf("Enter two integers: ");
    fflush(stdin);
    scanf("%d", &num1);
    fflush(stdin);
    scanf("%d", &num2);
    printf("Sum: %d\n", num1+num2);
    printf("###########################\n");    
    return 0;
}