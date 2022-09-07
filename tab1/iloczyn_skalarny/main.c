#include <stdio.h>
#include <stdlib.h>

double iloczyn_skalarny(int n, double tab1[], double tab2[])
{
    double suma = 0;
    for(int i=0; i<n; i++)
    {
        suma = suma+ (tab1[i]*tab2[i]);
    }
    return suma;
}
int main()
{
    double t1[]={1,2, 6};
    double t2[]={5,4, 4};
    printf("iloczyn skalarny : %.2f\n", iloczyn_skalarny(3,t1,t2));
    return 0;
}
