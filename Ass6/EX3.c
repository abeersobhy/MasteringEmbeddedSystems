#include <stdio.h>
#include <string.h>
int main()
{
	char str[10];
	char* ptr = str;
	printf("Enter a string: ");
	gets(str);
	for(int i = strlen(str); i >= 0 ; i--)
	{
		printf("%c", *(ptr+i));		
	}
			
	return 0;
}