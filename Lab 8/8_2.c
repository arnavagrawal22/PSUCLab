// Arnav Agrawal
// 200905200
// Lab 8
// Question 2
// Write a function Largest to find the maximum of a given list of numbers. Also write
// a main program to read N numbers and find the largest among them using this
// function.
#include <stdio.h>

int largest(int arr[], int num)
{
    int i = 0;
    int max = arr[0];
    for (i = 0; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");

    int arr[100];
    int i, num;
    printf("Enter the total numbers in the list: \n");
    scanf("%d", &num);
    printf("Enter the numbers now:\n");
    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);
    printf("Largest in given array is %d", largest(arr, num));
    return 0;
}
