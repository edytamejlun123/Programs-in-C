#include <stdio.h>
#include <stdlib.h>

struct Budynek{
    char* adres;
    int numer;
};
int dlugosc(char*n)
{
    int w=0;
    for(int i=0; n[i]!='\0'; i++)
    {
        w++;
    }
    return w;
}
struct Budynek foo(struct Budynek tab[], int n)
{
    int temp=0;
    for(int i=0; i<n; i++)
    {
        if(dlugosc(tab[temp].adres) > dlugosc(tab[i].adres))
            temp = i;
    }
    return tab[temp];
};
int main()
{
    struct Budynek b1 = {"Mariacka", 3};
    struct Budynek b2 = {"abc", 5};
    struct Budynek tablica[2] = {b1, b2};
    struct Budynek wynik = foo(tablica,2);
    printf("%s %d\n ", wynik.adres, wynik.numer);
    return 0;
}
