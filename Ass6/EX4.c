#include <stdio.h>


int main()
{
	int n;
	int arr[15];
	int* ptr = arr;
	printf("Input the number of elements to store in the array (max 15): ");
	scanf("%d", &n);
	printf("Enter %d number in the array: \n", n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}		
	for(int i = n-1; i >= 0 ; i--)
	{
		printf("%d ", *(ptr+i));		
	}
			
	return 0;
}