#include <stdio.h>
#include <stdlib.h>


int fun ( int tab[3][3] , char *n)
{
    return 4;
}
int main()
{
    char *napis = "abc";
    int tab[3][3] = { {1,2,3}, {6,5,4}, {-8,9,0} };
    printf("%d\n", fun(tab, napis));
    return 0;
}
