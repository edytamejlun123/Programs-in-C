#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * utwórz()
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
    struct element* example = utwórz();
    wyczysz(example);
    return 0;
}
