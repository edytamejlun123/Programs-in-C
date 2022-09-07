#include <stdio.h>
#include <stdlib.h>

int roznica(int n, int m, int **tab)
{
    int min=tab[0][0];
    int max=tab[0][0];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(min>tab[i][j])
            {
                min = tab[i][j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(max<tab[i][j])
            {
                max = tab[i][j];
            }
        }
    }
    return max-min;
}
int main()
{
    int **tab=(int **)malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++)
    {
        tab[i]=malloc(sizeof(int)*3);
    }
    tab[0][0]=18;
    tab[0][1]=4;
    tab[1][0]=3;
    tab[1][1]=8;
    printf("%d\n", roznica(2,2,tab));
    return 0;
}
