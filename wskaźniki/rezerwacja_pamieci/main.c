#include <stdio.h>
#include <stdlib.h>

int *pamiec()
{
    return malloc(sizeof(int) );
}
int main()
{
    printf("%p\n", pamiec());
    printf("%p\n", pamiec());
    printf("%p\n", pamiec());
    return 0;
}
