#include <stdio.h>
#include <stdlib.h>

void suma_macierzy(int n, int **t1, int**t2)
{
    int**t3=(int**)malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
    {
        t3[i]=malloc(sizeof(int*)*n);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            t3[i][j] = t2[i][j]+t1[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++ )
        {
            printf("tab3 [ %d ][ %d ]: %d", i,j,t3[i][j]);
        }
    }
}
int main()
{
    int**t1=(int**)malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++)
    {
        t1 = malloc(sizeof(int*)*2);
    }
    t1[0][0]=1;
    t1[0][1]=2;
    t1[1][0]=3;
    t1[1][1]=5;
    int**t2=(int**)malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++)
    {
        t2 = malloc(sizeof(int*)*2);
    }
    t2[0][0]=6;
    t2[0][1]=3;
    t2[1][0]=4;
    t2[1][1]=1;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++ )
        {
            printf("tab2 [ %d ][ %d ]: %d \n ", i,j, t2[i][j]);
        }
    }
    suma_macierzy(2,t1,t2);
    return 0;
}
