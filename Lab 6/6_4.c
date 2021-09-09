// Arnav Agrawal
// 200905200
// Lab 6
// Question 4
// To interchange the primary and secondary diagonal elements in the given Matrix
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int m, n, temp, a[10][10];
    int i, j;
    printf("Enter the dimensions of matrix\n");
    scanf("%d %d", &m, &n);
    if (m != n)
    {
        printf("Matrix is not symmetric\n");
    }
    else
    {
        printf("Enter the elements of the matrix: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        }
        printf("The original Matrix is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    temp = a[i][j];
                    a[i][j] = a[i][n - i - 1];
                    a[i][n - i - 1] = temp;
                }
            }
        }
        printf("The Updated Matrix is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", a[i][j]);
            printf("\n");
        }
    }
    return 0;
}
