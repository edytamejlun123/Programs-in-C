#include <stdio.h>
#include <stdlib.h>

int suma(const int *a, const int *b)
{
    return *a + *b;
}
int main()
{
    int a=9, b=8;
    printf("%d", suma(&a, &b));
    return 0;
}
