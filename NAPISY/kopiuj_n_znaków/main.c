#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

void kopiujn(char n1[], char n2[], int n)
{
    for(int i=0; i<n; i++)
    {
        n2[i] = n1[i];
    }
}
void kopiuj_n(wchar_t n1[], wchar_t n2[], int n)
{
    for(int i=0; i<n; i++)
    {
        n2[i] = n1[i];
    }
}
int main()
{
    char napis1[] = "Edyta";
    char napis2[] = "Dorota";
    kopiujn(napis1, napis2, 2);
    printf("%s\n", napis2);
    wchar_t n1[] = L"Dom";
    wchar_t n2[] = L"pralka";
    kopiuj_n(n1, n2, 4);
    wprintf(L"%s\n", n2);
    return 0;
}
