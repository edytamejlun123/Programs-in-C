#include <stdio.h>
#include <stdlib.h>

void foo(const int a, float b)
{
    printf("100");
}
int main()
{
    int a=7;
    float b=9;
    const * int wsk = &a;
    //foo(wsk, b);
    return 0;
}
