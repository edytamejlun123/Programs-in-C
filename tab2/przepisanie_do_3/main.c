#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int t1[], int t2[], int t3[])
{
    for(int i=0; i<2*n; i++)
    {
        if(i<n)
        {
        t3[i]=t1[i];
        }
        if(i>=n)
        {
        t3[i]=t2[i-n];
        }

    }
}
int main()
{
    int t1[]={1,2};
    int t2[]={4,5};
    int t3[]={6,7,7,8};
    foo(2,t1,t2,t3);
    for(int i=0; i<4; i++)
    {
        printf("%d\n", t3[i]);
    }
    return 0;
}
