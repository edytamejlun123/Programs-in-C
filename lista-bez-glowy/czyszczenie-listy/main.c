#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utw�rz()
{
    return NULL;
};

void wyczysz(struct element *Lista)
{
    struct element * wsk = Lista;
    while(Lista!=NULL)
    {
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
}

int main()
{
    struct element* example = utw�rz();
    wyczysz(example);
    return 0;
}
