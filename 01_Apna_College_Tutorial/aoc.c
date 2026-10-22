#include <stdio.h>
int main()
{
    float radius;
    printf("Enter the radius :");
    scanf("%f", &radius);
    double area;
    area=3.14*radius*radius;
    printf("%.2f", area);
    return 0;
}