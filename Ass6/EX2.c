#include <stdio.h>

int main()
{
	char alpha = 'A';
	char* ptr = &alpha;
	
	for(int i = 0; i < 26; i++)
	{
		printf("%c ", *ptr+i);		
	}
			
	return 0;
}