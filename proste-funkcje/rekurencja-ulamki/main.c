#include <stdio.h>
#include <stdlib.h>

double ciag_geom(int n)
{
    if(n==0)
    {
        return 1.0/9.0;
    }
    return ciag_geom(n-1)*(-1);
}
int main()
{
    printf("%f\n", ciag_geom(0));
    printf("%f\n", ciag_geom(1));
    printf("%f\n", ciag_geom(2));
    return 0;
}
