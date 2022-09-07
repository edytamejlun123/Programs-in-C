#include <stdio.h>
#include <stdlib.h>

int id_wartosci(int n, int tablica[])
{
    int max=tablica[0];
    for(int e=0; e<n; e++)
    {
        if(tablica[e]<0)
        {
            if(max<tablica[e]*(-1))
                max = tablica[e];
        }
        if (max< tablica[e])
            max = tablica[e];
    }
    for(int e=0; e<n; e++)
    {
        if(max == tablica[e])
            return e;
    }
}
int main()
{
    int tablica [] = {-54, 32, 66, -90};
    printf("%d\n", id_wartosci(4,tablica));
    return 0;
}
