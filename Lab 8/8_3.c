// Arnav Agrawal
// 200905200
// Lab 8
// Question 3
// Write a function IsPalin to check whether the given string is a palindrome or not.
// Write a main function to test this function.
#include <stdio.h>
int IsPalin(char[]);

int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    char arr[100];
    printf("Enter string:\n");
    gets(arr);
    int palin = IsPalin(arr);
    if (palin == 0)
        printf("Is a Palindrome");
    else
        printf("Not a Palindrome");
    return 0;
}
int IsPalin(char arr[100])
{
    int i, n = 0, flag = 0;
    for (i = 0; arr[i] != '\0'; i++)
        n++;
    for (i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
