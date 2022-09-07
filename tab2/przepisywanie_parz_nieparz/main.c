#include <stdio.h>
#include <stdlib.h>

void foo(unsigned int n, int t1[],int t2[],int t3[])
{

}
int main()
{

    int t1[]={1,2};
    int t2[]={6,7};
    int t3[]={3,4,3,4};
    foo(2,t1,t2,t3);
    for(int i=0; i<4; i++)
    {
        printf("%d\n", t3[i]);
    }
    return 0;
}
