// Arnav Agrawal
// 200905200
// Lab 6
// Question 5
// Interchange any two Rows & Columns in the given Matrix.
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int m, n, a[10][10], temp, r1, r2, c1, c2;
    int i, j;
    printf("Enter the dimensions of the matrix: \n");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("The original matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\nEnter the rows to exchange:\n");
    scanf("%d %d", &r1, &r2);
    for (j = 0; j < n; j++)
    {
        temp = a[r1 - 1][j];
        a[r1 - 1][j] = a[r2 - 1][j];
        a[r2 - 1][j] = temp;
    }
    printf("The updated matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\nEnter the columns to exchange:\n");
    scanf("%d %d", &c1, &c2);
    for (i = 0; i < m; i++)
    {
        temp = a[i][c1 - 1];
        a[i][c1 - 1] = a[i][c2 - 1];
        a[i][c2 - 1] = temp;
    }
    printf("The updated matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    return 0;
}
