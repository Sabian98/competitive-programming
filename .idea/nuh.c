#include <stdio.h>
#include <conio.h>
#define PI 3.14
main()
{
    float radius,area;
    printf("enter the radius of the circle:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("area:%f",area);
    return 0;
}
