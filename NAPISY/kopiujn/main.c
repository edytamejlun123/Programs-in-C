#include <stdio.h>
#include <stdlib.h>

int kopiujn(char*np1, char*np2, int n)
{
    char*np3;
    for(int i=0; i<n; i++)
    {
         np3[i] == np1[i];
    }
    np2 = *np2 + *np3;
    return np2;
}
int main()
{
    printf("%s\n", kopiujn("abc", "sdfgh", 3));
    return 0;
}
