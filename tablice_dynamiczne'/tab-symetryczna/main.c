#include <stdio.h>
#include <stdlib.h>

int symetryczna(int **tab, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(tab[i][j]!=tab[j][i])
                return 0;
            return 1;
        }
    }
}

void wypisz(int **t, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d, ", t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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
    tab[2][1] = 8;
    tab[2][2] = -2;
    wypisz(tab,3);
    printf("%d",symetryczna(tab,3));
    return 0;
}
