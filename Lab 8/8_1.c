// Arnav Agrawal
// 200905200
// Lab 8
// Question 1
// Write a function Fact to find the factorial of a given number. Using this function,
// compute NCR in the main function
#include <stdio.h>
int Fact(int);
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");

    int n, r, ncr;

    printf("Please Enter the Values for n and r: \n");
    scanf("%d %d", &n, &r);

    ncr = Fact(n) / (Fact(r) * Fact(n - r));
    printf(" %d C %d = %d", n, r, ncr);
    return 0;
}

int Fact(int Number)
{
    int i;
    int Factorial = 1;

    for (i = 1; i <= Number; i++)
    {
        Factorial = Factorial * i;
    }
    return Factorial;
}
