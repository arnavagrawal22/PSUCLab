// Arnav Agrawal
// 200905200
// Lab 4
// Question 2
// Generate Floyd’s triangle using natural numbers for a given limit N
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int n;
    printf("Enter N\n");
    scanf("%d", &n);
    int c = 1;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            printf("%d\t", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}
