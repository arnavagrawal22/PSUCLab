// Arnav Agrawal
// 200905200
// Lab 3
// Question 1
// Reverse a given number and check if it is a palindrome or not. (use while loop).
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
    int reverse = 0;
    int digit;
    while (num_copy > 0)
    {
        digit = num_copy % 10;
        reverse = reverse * 10 + digit;
        num_copy /= 10;
    }
    printf("The number reversed is %d \n", reverse);
    if (reverse == num)
    {
        printf("Palindrome \n");
    }
    else
        printf("Not a palindrome \n");

    return 0;
}
