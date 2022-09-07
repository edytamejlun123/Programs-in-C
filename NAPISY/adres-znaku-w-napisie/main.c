#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*n)
{
    int ilosc=0;
    for(int i=0; n[i]!='\0'; i++)
        ilosc++;
    return ilosc;
}
char *foo(char* napis, char znak[])
{
    char *adres;
    int e=0;
    for(int i=0; napis[i]!='\0'; i++)
    {
        if(napis[i] == znak[0])
        {
            adres = &napis[i];
        }
        if(napis[i]!=znak[0])
            e++;
    }
    if(e==dlugosc(napis))
        return NULL;
    return adres;
}
int main()
{
    char*n = "gfdoos";
    char z[] = "s";
    printf("%p\n", foo(n,z));
    return 0;
}
