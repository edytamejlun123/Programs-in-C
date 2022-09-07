#include <stdio.h>
#include <stdlib.h>

void suma(unsigned int n,int tab1[],int tab2[],int tab3[])
{
    for(int i=0; i<n; i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}
int main()
{
    int tab1[]={1,2,3,4};
    int tab2[]={4,3,2,6};
    int tab3[]={7,6,5,4};
    suma(4,tab1,tab2,tab3);
    for(int i=0; i<4; i++)
    {
        printf("%d\n", tab3[i]);
    }
    return 0;
}
