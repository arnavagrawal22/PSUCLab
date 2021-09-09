// Arnav Agrawal
// 200905200
// Lab 5
// Question 2
// Print all the prime numbers in a given 1D array.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");

    int arr[10], i, s, j, p;

    printf("Enter size of an array:");
    scanf("%d", &s);

    printf("Enter array elements:");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The following primes are there\t");
    for (i = 0; i < s; i++)
    {
        j = 2;
        p = 1;
        while (j < arr[i])
        {
            if (arr[i] % j == 0)
            {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}