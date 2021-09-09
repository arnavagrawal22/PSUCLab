// Arnav Agrawal
// 200905200
// Lab 7
// Question 5
// Delete a word from the given sentence.
#include <stdio.h>
#include <string.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    char str[100], substr[50];
    int i, j, k, pos, flag = 0;
    printf("Enter the main string/sentence\n");
    gets(str);
    printf("Enter the word to be deleted /substring\n");
    fflush(stdin);
    gets(substr);
    j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == substr[j])
        {
            pos = i;
            j = j + 1;
            for (k = pos + 1; j < strlen(substr); k++, j++) // matching susbsequent characters of the substring
            {
                if (str[k] == substr[j])
                    continue;
                else
                {
                    j = 0;
                    break;
                }
            }
        }
        if (j == strlen(substr))
            flag = 1;
    }
    if (flag == 0)
        printf("Word to be deleted is not found\n");
    else
    {
        if (pos + strlen(substr) >= strlen(str))
            str[pos] = '\0';
        else
        {
            for (i = pos; i < strlen(str); i++)
                str[i] = str[strlen(substr) + i];
        }
    }
    printf("The modified string is :\n");
    puts(str);
    return 0;
}
