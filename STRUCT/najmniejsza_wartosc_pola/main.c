#include <stdio.h>
#include <stdlib.h>

struct Pracownik{
    char imie;
    int nr;
    float wynagrodzenie;
};

float najmniejsze_wynagrodzenie(int n, struct Pracownik arg[])
{
    float temp=arg[0].wynagrodzenie;
    for(int i=0; i<n; i++)
    {
        if(temp>arg[i].wynagrodzenie)
            temp=arg[i].wynagrodzenie;
    }
    return temp;
}
int main()
{
    struct Pracownik pr1 = {"Ala", 1, 123.2};
    struct Pracownik pr2 = {"Ola", 2, 143.2};
    struct Pracownik tab[] = {pr1, pr2};
    printf("%.1f", najmniejsze_wynagrodzenie(2,tab));
    return 0;
}
