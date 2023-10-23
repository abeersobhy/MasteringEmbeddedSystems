#include <stdio.h>

int main()
{
	int m = 29;
	int* ptr = &m;
	printf("Value of m = %d\n", m);
	printf("Address of m = %d\n", &m);
	
	m = 34;	
	printf("Value pointed by ptr = %d\n", *ptr);
	printf("Address pointed by ptr = %d\n", ptr);
	*ptr = 7;	
	
	printf("Value of m = %d\n", m);
	printf("Address of m = %d\n", &m);
		
	return 0;
}