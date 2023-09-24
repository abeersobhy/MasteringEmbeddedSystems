#include <stdio.h>
#include <string.h>
void reverseString(char* string);

int num, fact;
int main()
{
    char string[100];
    printf("Enter a Sentence: ");
    gets(string);
    reverseString(string);
    return 0;
}
void reverseString(char* string)
{
    int i = strlen(string);
    while (i >= 0)
    {
        printf("%c", string[i]);
        i--;
    }
}