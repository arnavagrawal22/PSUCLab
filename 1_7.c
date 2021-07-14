// Arnav Agrawal
// 200905200
// Lab 1
// Question 7
// Convert the given temperature in Fahrenheit to Centigrade.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    float F;
    printf("Enter temp in degree fahrenheit\n");
    scanf("%f", &F);
    float C = (F - 32) * 5 / 9;
    printf("The given temp in Centigrade is %f", C);
    return 0;
}
