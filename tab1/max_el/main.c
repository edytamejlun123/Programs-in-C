#include <stdio.h>
#include <stdlib.h>

int max_el(int n, int tab[])
{
    int max = tab[0];
    for(int e=0; e<n; e++)
    {
        if(max<tab[e])
            max = tab[e];
    }
    return max;
}

int min_el(int n, int tab[])
{
    int min=tab[0];
    for(int e=0; e<n; e++)
    {
        if(min>tab[e])
            min=tab[e];
    }
    return min;
}
int main()
{
    int tablica[]={-6, -5, -4, 8};
    printf("%d\n", max_el(4,tablica));
    printf("%d\n", min_el(4,tablica));
    return 0;
}
