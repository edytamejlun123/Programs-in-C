#include <stdio.h>
#include <stdlib.h>

int wskaznik (int n, double *tab)
{
    double temp[]={};
    for(int i=0; i<n; i++)
    {
        temp[i] = tab[i];
        printf("%.2f\n", temp[i]);
    }
    return &temp;
}
int main()
{
    double tab1[] = {2,3,6,5,4,3};
    printf("%f\n",wskaznik(6,tab1));
    return 0;
}
