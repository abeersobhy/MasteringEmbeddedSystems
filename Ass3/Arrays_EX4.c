#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;
    int num = 0;
    int location =0;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int data[n+1];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("Enter the element to be inserted : ");
    scanf("%d", &num);
    printf("Enter the location : ");
    fflush(stdin);
    scanf("%d", &location);
    for(i = n ; i > (location - 1) ; i--)
    {
        data[i] = data[i-1];
    }
    data[i] = num;
    for(int i = 0; i < n+1; i++)
    {
        printf("%d ", data[i]);
    }
    return 0;
}