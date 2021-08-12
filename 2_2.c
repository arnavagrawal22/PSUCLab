// Arnav Agrawal
// 200905200
// Lab 2
// Question 2
// Find the largest among given 3 numbers
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int a, b, c;
    printf("Enter three number\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("The largest number is a-%d\n", a);
        }
        else
        {
            printf("The largest number is c-%d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("The largest number is b-%d\n", b);
        }
        else
        {
            printf("The largest number is c-%d\n", c);
        }
    }
    return 0;
}