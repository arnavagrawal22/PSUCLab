// Arnav Agrawal
// 200905200
// Lab 2
// Question 6
// Find the smallest among three numbers using conditional operator.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int a, b, c;
    printf("Enter a,b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    int min;
    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("The smallest number is %d\n", min);
    return 0;
}