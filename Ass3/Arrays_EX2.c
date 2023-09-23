#include <stdio.h>

int main()
{
    
    int n = 0;
    printf("Enter the number of data\n");
    scanf("%d", &n);
    float data[n];
    float sum =0; 
    for(int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &data[i]);
        sum += data[i];
    }
    printf("Average = %f: ", sum/n);
    return 0;
}