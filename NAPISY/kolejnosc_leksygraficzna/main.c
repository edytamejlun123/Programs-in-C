#include <stdio.h>
#include <stdlib.h>

int kolejnosc_leksykograficzna(char*np1, char*np2)
{
    int i;
    for(i=0; np1[i]!=0 && np2[i]!=0; i++)
    {
        if(np1[i] < np2[i])
        {
            return 1;
        }
        if(np1[i]>np2[i])
        {
            return 0;
        }
    }
}
int main()
{
    printf("%i\n", kolejnosc_leksykograficzna("abc", "abb"));
    printf("%i\n", kolejnosc_leksykograficzna("abc", "zzz"));
    printf("%i\n", kolejnosc_leksykograficzna("zzze", "zzza"));
    return 0;
}
