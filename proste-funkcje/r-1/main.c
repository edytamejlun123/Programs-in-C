#include <stdio.h>
#include <stdlib.h>

int rekurencja(unsigned int n)
{
    if(n==0 || n==1)
        return 1;
    if(n%2==0)
        return rekurencja(n/2)+1;
    return rekurencja( (n-1)/2 )-1;
}
int main()
{
    printf("%d\n\n", rekurencja(2));
    printf("%d\n\n", rekurencja(10));
    return 0;
}
