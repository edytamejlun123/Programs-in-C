#include <stdio.h>
#include <stdlib.h>

void przesuniecie (int n, int tab[])
{
    for(int i=0; i<n; i++)
    {
        tab[i-1] = tab[i];
    }
}
int main()
{
    int tab[] = {-2, 4, 5};
    przesuniecie(3,tab);
    for(int i=0; i<3; i++)
    {
        printf("%d\n", tab[i]);
    }
    return 0;
}
