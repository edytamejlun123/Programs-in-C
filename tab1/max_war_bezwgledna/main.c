#include <stdio.h>
#include <stdlib.h>

int max_element(int n, int tablica[])
{
    int max=tablica[0];
    for(int e=0; e<n; e++)
    {
        if(tablica[e]<0)
        {
            if(max<tablica[e]*(-1))
                max = tablica[e]*(-1);
        }
        if (max< tablica[e])
            max = tablica[e];
    }
    return max;
}

int main()
{
    int tab[] = {-6, -33, -94};
    printf("%d\n", max_element(3, tab));

    for(int e=0; e<3; e++)
    {
        printf("%d\n", tab[e]);
    }
    return 0;
}
