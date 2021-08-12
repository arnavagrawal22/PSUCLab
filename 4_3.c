// Arnav Agrawal
// 200905200
// Lab 4
// Question 3
// Evaluate the sine series, sin(x)= x-x3/3! + x5/5!–x7/7!+ ......... to n terms.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int n;
    printf("Enter N\n");
    scanf("%d", &n);
    float x;
    printf("Enter the angle in radians\n");
    scanf("%f", &x);
    float curr_term, sum;
    curr_term = x;
    sum = x;
    for (int i = 1; i <= n; i++)
    {
        curr_term = curr_term * (((-1) * pow(x, 2)) / (2 * i * (2 * (i) + 1)));
        sum += curr_term;
    }
    printf("Library value of Sin(%f) =  %f \n", x, sin(x));
    printf("Whilst we get, Sin (%f) = %f", x, sum);

    return 0;
}
