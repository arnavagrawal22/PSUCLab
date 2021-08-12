// Arnav Agrawal
// 200905200
// Lab 2
// Question 4
// Compute all the roots of a quadratic equation using switch case statement.
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    float a;
    float b;
    float c;
    printf("Please enter a,b and c\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Finding roots of %fx^2 + (%f)x + (%f)\n", a, b, c);
    float d;  //discriminant
    float r1; //first root
    float r2;
    float imaginary;
    d = b * b - (4 * a * c);
    switch (d > 0)
    {
    case 1:
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Two distinct and real roots: %f and %f\n", r1, r2);
        break;
    case 0:
        switch (d < 0)
        {
        case 1:
            r1 = r2 = -b / (2 * a);
            imaginary = sqrt(-d) / (2 * a);
            printf("Two distinct complex roots: %f + i%f and %f - i%f\n", r1, imaginary, r2, imaginary);
            break;
        case 0:
            r1 = r2 = -b / (2 * a);
            printf("Two equal and real roots: %f and %f\n", r1, r2);
            break;
        }
        break;
    }
    return 0;
}