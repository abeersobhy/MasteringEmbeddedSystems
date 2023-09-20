#include <stdio.h>

int main()
{
    char in = 0;
    printf("Enter a character: ");
    scanf("%c", &in);
    if((in >= 'a' && in <= 'z') || (in >= 'A') && (in <= 'Z'))
    {
        printf("%c is an alphabet", in);
    }
    else
    {
        printf("%c is not an alphabet", in);
    }

    return 0;
}