// Arnav Agrawal
// 200905200
// Lab 5
// Question 3
// Arrange the given elements in a 1D array in ascending and descending order using
// bubble sort method. [Hint: use switch case (as case ‘a’ and case‘d’) to specify the
// order].

#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int i, j, a, n, ch;
    printf("Enter the size \n");
    scanf("%d", &n);
    int number[n];
    printf("Enter the Numbers \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    while (1)
    {
        printf("Press 1. For ASCENDING\n");
        printf("Press 2. For DESCENDING\n");
        printf("Enter Your Choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (number[i] > number[j])
                    {
                        a = number[i];
                        number[i] = number[j];
                        number[j] = a;
                    }
                }
            }
            printf("\nThe numbers arranged in ascending order are given below\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\n", number[i]);
            }
            break;
        case 2:
            for (i = 0; i < n; i++)
            {
                for (j = i + 1; j < n; j++)
                {
                    if (number[i] < number[j])
                    {
                        a = number[i];
                        number[i] = number[j];
                        number[j] = a;
                    }
                }
            }
            printf("\nThe numbers arranged in descending order are given below\n");
            for (i = 0; i < n; i++)
            {
                printf("%d\n", number[i]);
            }
            break;
        default:
            printf("\n INVALID CHOICE \n");
            break;
        }
    }
    return 0;
}