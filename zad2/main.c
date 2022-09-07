#include <stdio.h>
#include <stdlib.h>

double foo(const int * a, double b)
{
    return 7;
}
int main()
{
    int const a= 9;
    int const *wsk;
    wsk = &a;
    double b = 9.1;
    printf("%.2lf\n", foo(wsk, b));
    return 0;
}
