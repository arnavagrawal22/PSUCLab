#include <stdio.h>

void fun1()
{
    fun2();
    printf("C");
}
void fun2()
{
    printf("D");
}
void main()
{
    fun1();
    fun2();
}
