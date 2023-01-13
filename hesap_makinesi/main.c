#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    int toplam=0, carpim=0, cikarma=0;
    float bolme=0;
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
     toplam = x+y;
    printf("x+y = %d\t", toplam);
     carpim = x*y;
    printf("x*y = %d\n", carpim);
     cikarma = x-y;
    printf("x-y = %d\t", cikarma);
     bolme = x/y;
    printf("x/y = %f\n", bolme);

    return 0;
}
