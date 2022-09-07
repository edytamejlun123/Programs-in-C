#include <stdio.h>
#include <stdlib.h>

int suma(int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(i%5==0 || i%7==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    printf("%d\n", suma(36));
    return 0;
}
