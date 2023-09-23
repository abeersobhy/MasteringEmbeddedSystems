#include <stdio.h>

int main()
{
    
    int r = 0;
    int c = 0;
    printf("Enter number of rows and columns of matrix\n");
    scanf("%d", &r);
    fflush(stdin);
    scanf("%d", &c);
    int data[r][c];
    int dataTranspose[c][r];
    printf("Enter elements of matrix : \n");
    for(int i = 0; i < r; i++)
    {
        for (int j  = 0; j < c; j++)
        {
            printf("Enter a%d%d: ", i+1, j+1);
            fflush(stdin);
            scanf("%d", &data[i][j]);
        }
    }
    for(int i = 0; i < r; i++)
    {
        for (int j  = 0; j < c; j++)
        {
            dataTranspose[j][i] = data[i][j];
        }
    }
    printf("Entered Matrix: \n");
    for(int i = 0; i < r; i++)
    {
        for (int j  = 0; j < c; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
    printf("Transposed Matrix: \n");
    for(int i = 0; i < c; i++)
    {
        for (int j  = 0; j < r; j++)
        {
            printf("%d ", dataTranspose[i][j]);
        }
        printf("\n");
    }
    return 0;
}