// Arnav Agrawal
// 200905200
// Lab 1
// Question 6
// Input radius to find the volume and surface area of a sphere.
#define PI 3.141592654
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    float r;
    printf("Enter the radius\n");
    scanf("%f", &r);
    float v = 4 * PI * r * r * r / 3;
    float a = 4 * r * r * PI;
    printf("The volume is %f\n", v);
    printf("The area is %f", a);
    return 0;
}
