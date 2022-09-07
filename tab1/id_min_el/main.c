#include <stdio.h>
#include <stdlib.h>

int id_max(int n, int tab[])
{
    int max = tab[0];
    for(int e=0; e<n; e++)
    {
        if (max < tab[e])
            max = tab[e];
    }
    for(int e=0; e<n; e++)
    {
        if(max == tab[e])
            return e;
    }
}
int main()
{
    int tablica[] = {-6, 4, 9, -3};
    printf("%d\n", id_max(4,tablica));
    return 0;
}
