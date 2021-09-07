// Arnav Agrawal
// 200905200
// Lab 4
// Question 6
// Write a program to demonstrate use of break and continue statements in for loop.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int i = 0, j = 0;
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        if (i == 21)
        {
            break;
        }

        printf("%d", i);
        printf("\n");
    }
    return 0;
}
