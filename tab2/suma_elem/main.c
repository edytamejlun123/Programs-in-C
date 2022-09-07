#include <stdio.h>
#include <stdlib.h>

int suma(unsigned int n, int tab[])
{
    int suma;
    for(int i=0; i<n; i++)
    {
        suma+=tab[i];
    }
    return suma;
}
int main()
{
    int tab1[] = {1,2,77};
    printf("suma: %d", suma(3, tab1));
    return 0;
}
