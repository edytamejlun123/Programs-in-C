#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n==0)
        return 1;
    return 2*foo(n-1)+5;
}
int main()
{
    printf("%d\n", foo(1));
    return 0;
}
