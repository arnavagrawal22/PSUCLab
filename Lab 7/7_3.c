// Arnav Agrawal
// 200905200
// Lab 7
// Question 3
// Check whether the given string is a palindrome or not.
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    char str[100];
    int i, n = 0, flag = 0;
    printf("Enter the String: \n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
        n++;
    for (i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("It is a Palindrome!!!!\n");
    else
        printf("It is not a Palindrome!!!\n");
    return 0;
}
