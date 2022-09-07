#include <stdio.h>
#include <stdlib.h>

union super_int
{
    unsigned int liczba2;
    int liczba1;
} u;
int main()
{
    u.liczba2 =9;
    u.liczba1 = 6;
    printf("rozmiar unii: %d\n", sizeof(u));
    printf("liczba1 : %d\n", u.liczba1);
    printf("liczba2 : %d\n", u.liczba2);
    return 0;
}
