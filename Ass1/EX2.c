#include <stdio.h>

int main()
{
    char in = 0;
    printf("Enter an alphabet: ");
    scanf("%c", &in);
    if(in == 'a' || in == 'e' || in == 'i' || in == 'o' || in == 'u')
    {
        printf("%c is a vowel", in);
    }
    else
    {
        printf("%c is a consonant", in);
    }

    return 0;
}