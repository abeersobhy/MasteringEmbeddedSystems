#include <stdio.h>
#include <string.h>

int main()
{
    char ch = 0;
    int counter = 0;
    char string[100];
    printf("Enter a string: ");
    gets(string);
    printf("Enter a character to find frequency : ");
    scanf("%c", &ch);
    for(int i = 0 ; i < strlen(string) ; i++)
    {
        if(string[i] == ch)
        {
            counter++;
        }       
    }
    printf("Frequency of %c = %d", ch, counter);    
}