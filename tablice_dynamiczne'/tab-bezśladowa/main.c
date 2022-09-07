#include <stdio.h>
#include <stdlib.h>

int bezsladowa(int **tab, int n)
{
    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                suma+=tab[i][j];
        }
    }
    if(suma!=0)
        return 0;
    return 1;
}
int main()
{
    int **tab = malloc(3*sizeof(int*));
    tab[0] = malloc(3*sizeof(int));
    tab[1] = malloc(3*sizeof(int));
    tab[2] = malloc(3*sizeof(int));
    tab[0][0] = 1;
    tab[0][1] = 2;
    tab[0][2] = 3;
    tab[1][0] = 2;
    tab[1][1] = 5;
    tab[1][2] = 8;
    tab[2][0] = 3;
    tab[2][1] = 1;
    tab[2][2] = 6;
    printf("%d\n", bezsladowa(tab,3));
    return 0;
}
