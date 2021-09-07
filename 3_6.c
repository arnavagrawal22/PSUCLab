// Arnav Agrawal
// 200905200
// Lab 3
// Question 6
// Write a program to demonstrate use of break and continue statements in while and do-while loops.
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int i = 9;
    while (i >= 0)
    {
        if (i == 5)
        {
            i--;
            continue;
        }
        printf("%d\t", i);
        i--;
        if (i == 1)
            break;
    }
    printf("\n");
    int j = 0;
    do
    {
        if (j == 4)
        {
            j++;
            continue;
        }
        printf("%d\t", j);
        j++;
        if (j == 10)
            break;
    } while (j < 10);

    return 0;
}
