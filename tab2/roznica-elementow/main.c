#include <stdio.h>
#include <stdlib.h>

float roznica(int n, float tablica[])
{
    float nw=0;
    float nm=tablica[0];
    for(int i=0; i<n; i++)
    {
        if(tablica[i]>nw)
            nw = tablica[i];
    }
    for(int i=0; i<n; i++)
    {
        if(nm>tablica[i])
            nm = tablica[i];
    }
    printf("najw = %.2f; najm = %.2f\n", nw, nm);
    return (nw - nm);
}
int main()
{
    float tab[] = {3, 6, 9.5, 1.5};
    printf("%.2f\n", roznica(4, tab));

    float t1[]= {3, 5.1, 2, 6.75, 9.21};
    printf("%.2f\n", roznica(5,t1));
    return 0;
}
