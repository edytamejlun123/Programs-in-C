#include <stdio.h>
#include <stdlib.h>

struct Telefon
{
    char*marka;
    double cena;
};
double max (struct Telefon tab[], int n)
{
    int temp=0;
    for(int i=1; i<n; i++)
    {
        if(tab[temp].cena < tab[i].cena)
            temp = i;
    }
    return tab[temp].cena;
}
int main()
{
    struct Telefon t1 = {" Samsung", 4506.99};
    struct Telefon t2 = {" LG", 3508.99};
    struct Telefon t3 = {"Huawei", 1000.55};
    struct Telefon tab[] = {t1, t2, t3};
    printf("%.2lf\n", max(tab,3));
    return 0;
}
