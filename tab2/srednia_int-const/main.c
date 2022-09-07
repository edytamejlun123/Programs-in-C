#include <stdio.h>
#include <stdlib.h>

double foo(unsigned int n, const int tab[])
{
    int suma;
    for(int i=0; i<n; i++)
    {
        suma+=tab[i];
    }
    double srednia = suma/n;
    return srednia;
}
int main()
{
    int tab[] = {1, 4, 5};
    printf("%lf\n", foo(3, tab));
    return 0;
}
