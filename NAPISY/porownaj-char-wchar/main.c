#include <stdio.h>
#include <stdlib.h>
#include<wchar.h>

int dlugosc(char*n)
{
    int w=0;
    while(*(n++))
        w++;
    return w;
}
int dl2(wchar_t n[])
{
    int z=0;
    while(*(n++))
        z++;
    return z;
}
int porownaj1(char*napis1, char*napis2)
{
    if(dlugosc(napis1)!=dlugosc(napis2))
        return 0;
    for(int i=0; napis1[i]!='\0'; i++)
    {
        if(napis1[i]!=napis2[i])
            return 0;
    }
    return 1;
}
int porownaj2(wchar_t n1[], wchar_t n2[])
{
    if(dl2(n1)!=dl2(n2))
        return 0;
    for(int i=0; n1[i]!='\0'; i++)
    {
        if(n1[i]!=n2[i])
            return 0;
    }
    return 1;
}
int main()
{
    char*n1= "Edyta";
    char*n2="Edyta";
    printf("%d\n", porownaj1(n1,n2));
    wchar_t n3[] = L"Dorota";
    wchar_t n4[] = L"Dorota";
    printf("%d\n", porownaj2(n3,n4));
    return 0;
}
