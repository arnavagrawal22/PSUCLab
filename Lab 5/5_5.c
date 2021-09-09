// Arnav Agrawal
// 200905200
// Lab 5
// Question 5
//Search the position of the number that is entered by the user and delete that number
// from the array and display the resultant array elements
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int a[10], n, pos = 0, x, temp;
    printf("Enter the no of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the no to be deleted:");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            pos = i;
        }
    }
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    printf("The new array is :\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
