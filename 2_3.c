// Arnav Agrawal
// 200905200
// Lab 2
// Question 3
// Swap two numbers without using third variable.

#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d\n", a, b);
    return 0;
}