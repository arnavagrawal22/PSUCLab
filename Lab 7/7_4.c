// Arnav Agrawal
// 200905200
// Lab 7
// Question 4
// Arrange ‘n’ names in alphabetical order (hint: use string handling function-strcpy)
#include <stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    char name[50][50], temp[25];
    int n, i, j;

    printf("Sorts the strings of an array using bubble sort :\n");
    printf("Input number of strings :");
    scanf("%d", &n);

    printf("Input the %d Strings  :\n", n);
    for (i = 0; i <= n; i++)
    {

        fgets(name[i], sizeof name, stdin);
    }

    for (i = 1; i <= n; i++)
        for (j = 0; j <= n - i; j++)
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
    printf("The strings appears after sorting :\n");
    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);
    return 0;
}