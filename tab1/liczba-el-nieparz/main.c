#include <stdio.h>
#include <stdlib.h>

int nieparzysta(int tab1[], int tab2[], int n)
{
    int s1=0;
    int s2=0;
    for(int i=0; i<n; i++)
    {
        if(tab1[i]%2!=0)
            s1++;
        if(tab2[i]%2!=0)
            s2++;
    }
    if(s1==s2)
        return 1;
    return 0;
}
int main()
{
    int t1[] = {1,3,5,6};
    int t2[] = {7,9,2,-2};
    printf("%d\n", nieparzysta(t1,t2,4));
    int t3[] = {2,2,1};
    int t4[] = {6,7,8};
    printf("%d\n", nieparzysta(t3,t4,3));
    return 0;
}
