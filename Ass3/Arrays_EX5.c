#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;
    int num = 0;
    int location =0;
    int flag = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int data[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("Enter the element to be searshed : ");
    fflush(stdin);
    scanf("%d", &num);

    for(i = 0 ; i < n ; i++)
    {
        if(data[i] == num)
        {
            flag = 1;
            break;
        }       
    }
    if(flag == 1)
    {
        printf("Number found in location %d", i+1);
    }
    else
    {
        printf("Number not found");
    }
    return 0;
}