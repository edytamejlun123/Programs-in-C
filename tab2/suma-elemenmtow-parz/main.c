#include <stdio.h>
#include <stdlib.h>

int suma(int tab[], int n)
{
    int s=0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            s+=tab[i];
        }
    }
    return s;
}
int porownaj(int tab1[], int tab2[], int n)
{
    if(suma(tab1,n) == suma(tab2,n))
        return 1;
    return 0;
}
int main()
{
    int t1[] = {1,2,3,4,5,6};
    int t2[] = {6,5,5,9,-4,1};
    printf("%d\n", porownaj(t1,t2,6));
    int t3[] = {0,4,1,7,6};
    int t4[]= {-9, 5, 12, 6, 4};
    printf("%d\n", porownaj(t3,t4,5));
    return 0;
}
