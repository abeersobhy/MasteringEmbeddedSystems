#include <stdio.h>

int main()
{
    int i = 0;
    char string[100];
    printf("Enter a string: ");
    gets(string);

    while(string[i] != '\0')
    {
        i++;       
    }
    printf("Length of %s = %d", string, i);    
}