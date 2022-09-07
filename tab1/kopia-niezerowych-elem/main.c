#include <stdio.h>
#include <stdlib.h>

int wskaznik_tab2(int n, int tab1[])
{
    int tab2[]={};
    int r=0;
    for(int i=0; i<n; i++)
    {
        if(tab1[i]!=0)
        {
            tab2[r]=tab1[i];
            r= r+1;
        }
    }
    printf("rozmiar: %d\n", r);
    for(int i=0; i<r; i++)
    {
        printf("%d\n", tab2[i]);
    }
    int *wsk;
    wsk = &tab2[0];
    return wsk;
}
int main()
{
    int t1[]= {1,0,3,0,0,0,0,0,5,4,0};
    printf("%d\n", wskaznik_tab2(11,t1));
    return 0;
}
