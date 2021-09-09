// Arnav Agrawal
// 200905200
// Lab 6
// Question 6
// Search for an element in a given matrix and count the number of its occurrences.

#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int m, n, count, a[10][10], num;
    int i, j;
    count = 0;
    printf("Enter the dimensions: \n");
    scanf("%d %d", &m, &n);
    printf("Enter the element to be searched\n");
    scanf("%d", &num);
    printf("Enter the elements of the matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("The given matrix is:\n");
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
            if (num == a[i][j])
                count++;
        }
    }
    if (count > 0)
        printf("The total number of times the element has occurred is :%d\n ", count);
    else
        printf("Element not found\n");
    return 0;
}
