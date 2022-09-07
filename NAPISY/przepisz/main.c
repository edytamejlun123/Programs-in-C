#include <stdio.h>
#include <stdlib.h>

int przepisz(char*np1, char*np2)
{
    np2 = np1;
    return np2;
}
int main()
{
    printf("%s\n", przepisz("abc", "abopopoo"));
    printf("%s\n", przepisz("jakis_napis", "123Edxka"));
    return 0;
}
