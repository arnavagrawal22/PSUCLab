// Arnav Agrawal
// 200905200
// Lab 8
// Question 4
// Write a function CornerSum which takes as a parameter, no. of rows and no. of
// columns of a matrix and returns the sum of the elements in the four corners of the
// matrix. Write a main function to test the function.
#include <stdio.h>
int CornerSum(int[][100], int, int);

int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");

    int a[100][100], temp[100][100];
    int n, m;
    printf("Enter the number of rows & columns of the array:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("\nThe matrix is:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = a[i][j];
            printf("%d\t", temp[i][j]);
        }
        printf("\n");
    }
    int res = CornerSum(a, m, n);
    printf("The sum of corner elements is %d.", res);
    return 0;
}
int CornerSum(int a[][100], int m, int n)
{
    int sum = 0;
    sum = a[0][0] + a[0][n - 1] + a[m - 1][n - 1] + a[m - 1][0];
    return sum;
}
