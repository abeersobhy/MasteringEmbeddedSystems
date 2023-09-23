#include <stdio.h>
#include <string.h>
int main()
{
    int len = 0;
    int i = 0;
    char string[100];
    char reversedString[100];
    printf("Enter a string: ");
    gets(string);
    len = strlen(string);
    for(int i = 0; i < len; i++)
    {
        reversedString[i] = string[len-i-1];
    }
    printf("Reversed string is %s ", reversedString);    
}