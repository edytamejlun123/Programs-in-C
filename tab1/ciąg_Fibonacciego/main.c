#include <stdio.h>
#include <stdlib.h>

int *ciag_f(int n)
{
    int tab[]={};
    if(n ==0)
    {
        tab[0] = 0;
        return *(tab+n);
    }
    return
}
int main()
{
    printf("%d\n", ciag_f(0));
    return 0;
}
