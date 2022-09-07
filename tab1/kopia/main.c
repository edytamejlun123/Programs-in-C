#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *tab)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\n", *(tab-i));
    }
}
int main()
{
    int tab[] = {1, -4, 7, 89};
    foo(4, tab+3);
    return 0;
}
