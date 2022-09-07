#include <stdio.h>
#include <stdlib.h>

enum Pies { JORK=1, BULDOG=2, OWCZAREK=3, HUSKY=4, CHIHUAHUA=5, PUDEL=6};
int main()
{
    enum Pies tab[] = {JORK, BULDOG, OWCZAREK, HUSKY, CHIHUAHUA, PUDEL};;
    for(int i=0; i<6; i++)
    {
        printf("%d\n", tab[i]);
    }
    printf("\n\n");
    for(int i=0; i<6; i++)
    {
        if(tab[i]==HUSKY || tab[i]==PUDEL)
        {
            printf("%d\n", tab[i]);
        }
    }
    return 0;
}
