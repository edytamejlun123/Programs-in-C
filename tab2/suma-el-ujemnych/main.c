#include <stdio.h>
#include <stdlib.h>

int suma(int tab[], int n)
{
    int s=0;
    for(int i=0; i<n; i++)
    {
        if(tab[i]<0)
            s++;
    }
    return s;
}
int main()
{
    int t[] = {1, 2, 8, 6};
    printf("%d\n", suma(t,4));
    return 0;
}
