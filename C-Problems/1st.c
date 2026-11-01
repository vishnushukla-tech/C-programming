#include <stdio.h>
int main()
{
    int radius;
    printf("Enter the radius of the circle:");
    scanf("%d" , &radius);
    float circumference,area;
    circumference=3.14*2*radius;
    area=3.14*radius*radius;
    printf("The Circumference is %f" , circumference);
    printf("The Area is %f" , area);
    return 0;

}