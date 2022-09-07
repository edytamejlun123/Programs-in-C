#include <stdio.h>
#include <stdlib.h>

union Strange
{
    int a;
    char b[4];
    double c;
};
int main()
{
    union Strange s1 = {3, "yt", 9.0};
    union Strange s2 = {4, "ig", 3.1};
    union Strange s3 = {5, "re", 3.2};
    union Strange s4 = {6, "nt", 3.3};
    union Strange s5 = {7, "we", 3.4};
    union Strange s6 = {8, "as", 3.5};

    union Strange tablica[6] = {s1,s2,s3,s4,s5,s6};

    for(int i=0; i<6; i++)
    {
        printf("tablica[%d] = a=%d; b=%s; c=%f \n", i, tablica[i].a,
                                                    tablica[i].b, tablica[i].c );
    }
    return 0;
}
