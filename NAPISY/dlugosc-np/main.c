#include <stdio.h>

int dlugosc(char*napis)
{
    int ilosc=0;
    for(int i=0; i<napis[i]!=0; i++)
    {
        ilosc++;
    }
    return ilosc;
}
int main() {
    char napis[] = "Edyta Mejlun";
    printf("%d\n", dlugosc(napis));
    return 0;
}
