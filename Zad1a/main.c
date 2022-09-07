#include <stdio.h>
#include <stdlib.h>
#include<wchar.h>

void foo(int * const a, float b)
{
    printf("0");
}
int main()
{
    int c=6;
    int * const wsk=&c;
    float b=6.8;
    foo(wsk, b);
    return 0;
}
