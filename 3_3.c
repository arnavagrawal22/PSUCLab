// Arnav Agrawal
// 200905200
// Lab 3
// Question 3
// Check if the sum of the cubes of all digits of an inputted number equals the number itself (Armstrong Number). (use while loop)
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
    int arms = 0;
    int digit;
    while (num_copy > 0)
    {
        digit = num_copy % 10;
        arms = arms + digit * digit * digit;
        num_copy /= 10;
    }
    if (arms == num)
    {
        printf("Armstrong Number \n");
    }
    else
        printf("Not an Armstrong Number \n");

    return 0;
}