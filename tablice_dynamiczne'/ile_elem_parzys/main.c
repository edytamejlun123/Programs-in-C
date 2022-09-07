#include <stdio.h>
#include <stdlib.h>
int ile_elementow_parzystych(int n,int m,int**tab1,int**tab2)
{
    int suma=0;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            if(tab1[i][j]%2==0)
            {
                suma++;
            }
            if(tab2[i][j]%2==0)
            {
                suma++;
            }
        }
    }
    return suma;
}
int main()
{
    int**t1=(int**)malloc(sizeof(int*)*2);
    for(int i=0; i<2; i++)
    {
        t1[i]=malloc(sizeof(int)*3);
    }
    t1[0][0]=2;
    t1[0][1]=3;
    t1[0][2]=-3;
    t1[1][0]=1;
    t1[1][1]=4;
    t1[1][2]=8;
    int**t2=(int**)malloc(sizeof(int*)*2);
    for(int i=0;i<2;i++)
    {
        t2[i]=malloc(sizeof(int*)*3);
    }
    t2[0][0]=-3;
    t2[0][1]=0;
    t2[0][2]=2;
    t2[1][0]=7;
    t2[1][1]=4;
    t2[1][2]=0;
    printf("%d\n", ile_elementow_parzystych(2,3,t1,t2));
    return 0;
}
