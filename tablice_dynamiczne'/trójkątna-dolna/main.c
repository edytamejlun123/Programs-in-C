#include <stdio.h>
#include <stdlib.h>

int trojkatna_dolna(int **tab, int n, int m)
{
    if(n!=m)
        return 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j && tab[i][j]!=0)
                return 0;

        }
    }
            return 1;
}
int main()
{
    int **tab = malloc(sizeof(int*)*3);
    tab[0] = malloc(sizeof(int)*3);
    tab[1] = malloc(sizeof(int)*3);
    tab[2] = malloc(sizeof(int)*3);
    tab[0][0] = 1;
    tab[0][1] = 0;
    tab[0][2] = 0;
    tab[1][0] = 2;
    tab[1][1] = 3;
    tab[1][2] = 0;
    tab[2][0] = -6;
    tab[2][1] = -9;
    tab[2][2] = 1;
    printf("%d\n", trojkatna_dolna(tab,3,3));
    return 0;
}
