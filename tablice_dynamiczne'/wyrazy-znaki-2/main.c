#include <stdio.h>
#include <stdlib.h>

void fun (const int *a, const int * b)
{
    printf("koniec");
}
int main()
{
    const int *a = 9;
    const int * b= 10;
    fun(a,b);
    return 0;
}
