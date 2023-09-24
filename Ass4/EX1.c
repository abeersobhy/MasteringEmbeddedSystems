#include <stdio.h>

void primeNumbers(int num1, int num2);

int num1, num2;
int main()
{
    printf("Enter two numbers (Interval): ");
    scanf("%d", &num1);
    fflush(stdin);
    scanf("%d", &num2);
    primeNumbers(num1, num2);
    return 0;
}
void primeNumbers(int num1, int num2)
{
    int flag = 0;
    for (int i = num1; i <= num2; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if((i != 1) && (flag == 0))
        {
            printf("%d ", i);
        }
        else
        {
            flag = 0;
        }
    }
}