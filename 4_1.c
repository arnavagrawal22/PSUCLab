// Arnav Agrawal
// 200905200
// Lab 4
// Question 1
// Generate the multiplication table for ‘n’ numbers up to ‘k’ terms (using nestedfor loops)
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int n, k;
    printf("Enter numbers n\n");
    scanf("%d", &n);
    printf("Enter number of terms k\n");
    scanf("%d", &k);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("%d \t", (i * j));
        }
        printf("\n");
    }
    return 0;
}
