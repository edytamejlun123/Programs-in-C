#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void zamiana(unsigned int n, int t1[], int t2[], int t3[])
{
    int e=0;
    int i=0;
    srand(time(0));
    for(e=1; e<2; e++)
    {
        i = rand()%n;
    }
    printf("indeks: %d\n", i);
    if(t1[i]<t2[i])
    {
        if(t2[i]>t3[i])
        {
            t1[i] = t2[i];
        }
        else
        {
            t1[i] = t3[i];
        }
    }
    if(t1[i]<t3[i])
    {
        t1[i] = t3[i];
    }
}
int main()
{
    int t1[]={1,2,7};
    int t2[]={6,7,2};
    int t3[]={8,0,5};
    zamiana(3,t1,t2,t3);
    for(int i=0; i<3; i++)
    {
        printf("%d\n", t1[i]);
    }
    return 0;
}
