// Arnav Agrawal
// 200905200
// Lab 3
// Question 2
// Generate primenumbers between 2 given limits.(use while loop)
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int a, b;
    printf("Enter the limits\n");
    scanf("%d %d", &a, &b);
    int start = a;
    while (start <= b)
    {
        int k = 2;
        int flag = 1;
        while (k < start)
        {
            if (start % k == 0)
            {
                flag = 0;
                break;
            }
            k++;
        }
        if (flag == 1 && start != 1)
        {
            printf("%d\t", start);
        }
        start++;
    }
}