// Arnav Agrawal
// 200905200
// Lab 3
// Question 4
// Write a program using do-while loop to read the numbers until -1 is encountered. Also count the number of prime numbers and composite numbers entered by user
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int num = 0;
    int total = 0;
    int prime = 0;
    while (num != -1)
    {
        printf("Enter a number \n");
        scanf("%d", &num);
        int k = 2;
        int flag = 1;
        while (k < num)
        {
            if (num % k == 0)
            {
                flag = 0;
                break;
            }
            k++;
        }
        if (flag == 1 && num > 1)
        {
            prime++;
        }
        total++;
    }
    printf("Total numbers entered: %d\n", total-1);
    printf("Total prime numbers entered: %d\n", prime);
    printf("Total composite numbers entered: %d\n", total - prime -1);

    return 0;
}