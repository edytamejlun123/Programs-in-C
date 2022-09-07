#include <stdio.h>
#include <stdlib.h>

void zamiana(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a = 3;
    int b = 1;
    printf("a: %d, %p\n", a,&a);
    printf("b: %d, %p\n", b,&b);
    zamiana(&a, &b);
    printf("a: %d, %p\n", a,&a);
    printf("b: %d, %p\n", b,&b);
    return 0;
}
