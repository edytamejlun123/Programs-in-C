#include <stdio.h>
#include <stdlib.h>

void zamiana(int **tab, int n, int m)
{
    for(int j=0; j<m; j++)
    {
        int wsk;
        wsk = tab[0][j];
        tab[0][j] = tab[n-1][j];
        tab[n-1][j] = wsk;
    }
}
void wypisz(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        printf("tab[%d]: ", i);
        for(int j=0; j<m; j++)
        {
            printf(" %d; ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}
int main()
{
    int **tab = malloc(sizeof(int*)*3);
    tab[0] = malloc(sizeof(int )*5);
    tab[1] = malloc(sizeof(int )*5);
    tab[2] = malloc(sizeof(int )*5);
    tab[0][0] = 1;
    tab[0][1] = 2;
    tab[0][2] = 3;
    tab[0][3] = -6;
    tab[0][4] = -7332;
    tab[1][0] = 0;
    tab[1][1] = 5;
    tab[1][2] = 8;
    tab[1][3] = -2;
    tab[1][4] = 12;
    tab[2][0] = 9;
    tab[2][1] = 8;
    tab[2][2] = 3;
    tab[2][3] = 76;
    tab[2][4] = -6;
    wypisz(tab,3,5);
    zamiana(tab,3,5);
    wypisz(tab,3,5);
    return 0;
}
