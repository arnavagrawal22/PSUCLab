// Arnav Agrawal
// 200905200
// Lab 7
// Question 2
// Input a string and toggle the case of every character in the input string.
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    char str[100];
    int i;
    printf("Enter the string\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    printf("\n the modified string is: \n");
    puts(str);
    return 0;
}
