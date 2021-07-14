// Arnav Agrawal
// 200905200
// Lab 1
// Question 8
// Write a C program to evaluate the following expression for the values a = 30, 
// b=10, c=5, d=15
#include<stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    float a = 30;
    float b = 10;
    float c = 5;
    float d = 15;
    printf("(i) - %f \n", (a + b) * c / d);
    printf("(ii) - %f \n", ((a + b) * c) / d);
    printf("(iii) - %f \n", a + (b * c) / d);
    printf("(iv) - %f \n", (a + b) * (c / d));
    return 0;
}