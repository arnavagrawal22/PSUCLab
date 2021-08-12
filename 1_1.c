// Arnav Agrawal
// 200905200
// Lab 1
// Question 1
// Write a C program to add two integers a and b read through the keyboard. Display the 
// result using third variable sum
#include<stdio.h>
int main()
{
    printf("Arnav Agrawal\n");
    printf("200905200\n");
    printf("Section M - 20\n");
    int a;
    int b;
    int sum;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum is %d",sum);
    return 0;
}
