#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int*b)
{
    if(*a < *b)
    {
        return *a;
    }
    else
    {
        return *b;
    }

}
int main()
{
    int a = 90;
    int b = 100;
    printf("%d", mniejsza(&a,&b));
    return 0;
}
