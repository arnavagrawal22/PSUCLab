// Arnav Agrawal
// 200905200
// Lab 2
// Question 5
// Write a program that will read the value of x and evaluate the following function
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    float x;
    printf("Please enter x\n");
    scanf("%f", &x);
    if (x > 0)
    {
        int y = 1;
        printf("The value of y is %d \n", y);
    }
    else if (x == 0)
    {
        int y = 0;
        printf("The value of y is %d \n", y);
    }
    else
    {
        int y = -1;
        printf("The value of y is %d \n", y);
    }
}
