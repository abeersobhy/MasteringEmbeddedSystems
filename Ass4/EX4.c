#include <stdio.h>

int PowerOfNum(int num, int power);

int num, power,result;
int main()
{
    printf("Enter base number: ");
    scanf("%d", &num);
    printf("Enter power number: ");
    fflush(stdin);
    scanf("%d", &power);
    result = PowerOfNum(num, power);
    printf("%d ^ %d = %d", num, power, result);
    return 0;
}
int PowerOfNum(int num, int power)
{
    if(power != 1)
    {
        return num * PowerOfNum(num, power-1); 
    }   
    else
    {
        return num;
    }
}