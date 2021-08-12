// Arnav Agrawal
// 200905200
// Lab 4
// Question 5
// Find out the generic root of any number.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int n;
    printf("Enter N\n");
    scanf("%d", &n);
    int sum = 0;
    for (; n > 0;)
    {
        int d = n % 10;
        sum += d;
        n /= 10;
    }

    if (sum > 9)
    {
        int sum_copy = sum;
        sum = 0;
        for (; sum_copy > 0;)
        {
            int d = sum_copy % 10;
            sum += d;
            sum_copy /= 10;
        }
    }
    else
    {
        printf("The generic root is %d\n", sum);
    }
    return 0;
}
