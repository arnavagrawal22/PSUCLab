// Arnav Agrawal
// 200905200
// Lab 6
// Question 1
// Find whether a given matrix is symmetric or not. [Hint: A = AT

#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int m, n, a[10][10];
    int i, j;
    printf("Enter the rows and columns\n");
    scanf("%d %d", &m, &n);
    if (m != n)
        printf("Its not a square matrix");
    else
    {
        printf("Enter the elements\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        }
        printf("The given matrix is: \n");
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
                if (a[i][j] != a[j][i])
                {
                    printf("Matrix is Not Symmetric\n");
                    exit(0);
                }
            }
        }
        printf("Matrix is Symmetric\n");
    }
    return 0;
}
