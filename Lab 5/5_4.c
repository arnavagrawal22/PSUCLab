// Arnav Agrawal
// 200905200
// Lab 5
// Question 4
// Insert an element into a 1D array by getting an element and the position from the
// user.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int array[100], position, c, n, value;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    printf("Enter the location where you wish to insert \n");
    scanf("%d", &position);

    printf("Enter the value to insert\n");
    scanf("%d", &value);

    for (c = n - 1; c >= position - 1; c--)
        array[c + 1] = array[c];

    array[position - 1] = value;

    printf("Resultant array is\n");

    for (c = 0; c <= n; c++)
        printf("%d\t", array[c]);

    return 0;
}
