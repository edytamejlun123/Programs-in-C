#include <stdio.h>
#include <stdlib.h>

int sumy(int n, int tab1[], int tab2[])
{
    int sum1=0;
    int sum2=0;
    for (int i=0; i<n; i++)
    {
        if(tab1[i]%2!=0)
            sum1+=tab1[i];
        if(tab2[i]%2!=0)
            sum2+=tab2[i];
    }
    if(sum1==sum2)
        return 1;
    return 0;
}
int main()
{
    int tablica1[]={1,2,3};
    int tablica2[]={3,5,1};
    printf("%d\n", sumy(3,tablica1,tablica2));
    int t1[]={1,2,2,5};
    int t2[]={3,3,2,2};
    printf("%d\n", sumy(4,t1,t2));
    return 0;
}
