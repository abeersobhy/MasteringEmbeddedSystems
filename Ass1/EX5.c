#include <stdio.h>

char ch = 0;
int main()
{
    printf("##########Console-output###\n");
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("ASCII value of %c = %d\n", ch , ch);
    printf("###########################\n");    
    return 0;
}