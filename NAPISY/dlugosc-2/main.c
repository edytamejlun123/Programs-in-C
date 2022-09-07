#include <stdio.h>
#include <stdlib.h>
#include<wchar.h>

int dlugosc1(char*napis)
{
    int ilosc=0;
    for(int i=0; napis[i]!='\0'; i++)
    {
        ilosc++;
    }
    return ilosc;
}
int dlugosc2(wchar_t n2[])
{
    int a=0;
    for(int i=0; n2[i]!='\0'; i++)
    {
        a++;
    }
    return a;
}
int main()
{
    char*n1 = "edyta";
    wchar_t n2[]=L"Dorota";
    printf("%d\n", dlugosc1(n1));
    printf("%d\n", dlugosc2(n2));
    return 0;
}
