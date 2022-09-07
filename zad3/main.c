#include <stdio.h>
#include <stdlib.h>

void fun ( float tab[4][4], char *n)
{
    printf("7");
}
int main()
{
    float tab[4][4] = { {1,2,1,1}, {4,4,4,4}, {6,6,6,6}, {8,8,8,8} };
    char*n= "abc";
    fun(tab,n);
    return 0;
}
