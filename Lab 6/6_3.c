// Arnav Agrawal
// 200905200
// Lab 6
// Question 3
// ### Perform matrix multiplication.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int i, j, k, m, n, p, q;
    int a[10][10], b[10][10], c[10][10];
    printf("Enter dimension for a\n");
    scanf("%d %d", &m, &n);
    printf("\n enter dimension  for b\n");
    scanf("%d %d", &p, &q);
    if (n != p)
    {
        printf("Cannot multiply");
    }
    else
    {
        printf("Enter elements for a\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        }
        printf("Enter elements for b\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
                scanf("%d", &b[i][j]);
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        printf("The multiplied matrix is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                printf("%d\t", c[i][j]);
            printf("\n");
        }
    }
    return 0;
}
