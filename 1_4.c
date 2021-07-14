// Arnav Agrawal
// 200905200
// Lab 1
// Question 4
// Write a C program to display the size of the data type int, char, float, double, long
// int and long double using size of ( ) operator.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int a;
    char b;
    float c;
    double d;
    long int e;
    long double f;
    printf("The size of type INT is %d bytes \n", sizeof(a));
    printf("The size of type CHAR is %d bytes \n", sizeof(b));
    printf("The size of type FLOAT is %d bytes \n", sizeof(c));
    printf("The size of type DOUBLE is %d bytes \n", sizeof(d));
    printf("The size of type LONG INT is %d bytes \n", sizeof(e));
    printf("The size of type LONG DOUBLE is %d bytes \n", sizeof(f));
    return 0;
}
