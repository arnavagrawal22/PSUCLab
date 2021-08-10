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
    int a = 30;
    int b = 10;
    int c = 5;
    int d = 15;
    printf("Taking data type as int\n");
    printf("(i) - %d \n", (a + b) * c / d);
    printf("(ii) - %d \n", ((a + b) * c) / d);
    printf("(iii) - %d \n", a + (b * c) / d);
    printf("(iv) - %d \n", (a + b) * (c / d));
    float A = 30;
    float B = 10;
    float C = 5;
    float D = 15;
    printf("Taking data type as float\n");
    printf("(i) - %f \n", (A + B) * C / D);
    printf("(ii) - %f \n", ((A + B) * C) / D);
    printf("(iii) - %f \n", A + (B * C) / D);
    printf("(iv) - %f \n", (A + B) * (C / D));
    return 0;
}