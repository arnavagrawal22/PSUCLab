// Arnav Agrawal
// 200905200
// Lab 3
// Question 5
// Check whether the given number is strong or not.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int num;
    printf("Enter the number \n");
    scanf("%d", &num);
    int num_copy = num;
    int new_num = 0;
    int digit;
    while (num_copy > 0)
    {
        digit = num_copy % 10;
        int i = 1;
        int fact=1;
        while (i <= digit)
        {
            fact *= i;
            i++;
        }
        new_num += fact;
        num_copy /=10;
    }
    if (new_num == num)
    {
        printf("Strong \n");
    }
    else
        printf("Not strong \n");
    return 0;
}
