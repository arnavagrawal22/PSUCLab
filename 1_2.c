// Arnav Agrawal
// 200905200
// Lab 1
// Question 2
// Write a C program to find the sum, difference, product and quotient of 2 numbers
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    float a;
    float b;
    float c;
    printf("Enter two numbers\n");
    scanf("%f%f", &a, &b);
    c = a + b;
    printf("Sum is %f\n", c);
    c = a - b;
    printf("Difference is %f \n", c);
    c = a * b;
    printf("Product is %f\n", c);
    c = a / b;
    printf("Quotient is %f\n", c);
}
