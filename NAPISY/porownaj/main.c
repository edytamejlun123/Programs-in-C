#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int ilosc=0;
    for(int i=0; i<napis[i]!=0; i++)
    {
        ilosc++;
    }
    return ilosc;
}
int porownaj(char* n1, char*n2)
{
    int a;
    if(dlugosc(n1)!=dlugosc(n2))
        return 0;
    for(int i=0; i<n1[i]!=0 || i<n2[i]!=0; i++)
    {
        if(n1[i]==n2[i])
        {
            a++;
        }
        if(a==dlugosc(n1))
        {
            return 1;
        }
    }
}
int main()
{
    char n1[]="abcd";
    char n2[]="abcb";
    printf("%d\n", porownaj(n1,n2));
    return 0;
}
