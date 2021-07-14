// Arnav Agrawal
// 200905200
// Lab 1
// Question 5
// Input P, N and R to compute simple and compound interest.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    float P;
    float N;
    float R;
    printf("Enter P,N,R\n");
    scanf("%f %f %f", &P, &N, &R);
    float SI = P * N * R / 100;
    float CI = (P * pow((1 + (R / 100)), N)) - P;
    printf("Simple Interet - %f\n", SI);
    printf("Compound Interest - %f", CI);
    return 0;
}