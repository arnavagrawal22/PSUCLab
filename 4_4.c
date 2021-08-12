// Arnav Agrawal
// 200905200
// Lab 4
// Question 4
//  Check whether a given number is perfect or not
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int n;
    printf("Enter N\n");
    scanf("%d", &n);

    int num = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            num += i;
        }
    }

    if (n == num)
    {
        printf("perfect Number \n");
    }
    else
        printf("Not an perfect Number \n");

    return 0;
}
