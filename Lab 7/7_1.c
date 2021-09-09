// Arnav Agrawal
// 200905200
// Lab 7
// Question 1
// Count the number of words in a sentence.

#include <stdio.h>
#include<string.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");

    char str[50];
    int i = 0, count = 1;
    printf("Enter sentence\n");
    gets(str);

    while (str[i] != '\0')
    {
        if ((str[i] == ' ' && str[i + 1] != ' '))
            count++;
        i++;
    }
    printf("no of words=%d", count);
    return 0;
