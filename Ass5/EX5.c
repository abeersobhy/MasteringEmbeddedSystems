#include <stdio.h>

#define PI 3.14
#define CIRCLE_AREA(R)   (2*PI*(R))  
int main()
{
    float radius;
    float area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = CIRCLE_AREA(radius/2);
    printf("Area = %.2f", area);
}