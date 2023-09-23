#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    float mat1[2][2];
    float mat2[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(i = 0; i < 2; i++)
    {
        for (j  = 0; j < 2; j++)
        {
            printf("Enter a%d%d: ", i+1, j+1);
            fflush(stdin);
            scanf("%f", &mat1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i = 0; i < 2; i++)
    {
        for (j  = 0; j < 2; j++)
        {
            printf("Enter b%d%d: ", i+1, j+1);
            fflush(stdin);
            scanf("%f", &mat2[i][j]);
        }
    }    
    printf("Sum of Matrix:\n");
    for(i = 0; i < 2; i++)
    {
        for (j  = 0; j < 2; j++)
        {
            printf("%f ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}