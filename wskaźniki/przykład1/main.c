#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 76;
    int *b;
    b = &a;
    printf("%d\n", &a);
    printf("%p\n", b);
    return 0;
}
