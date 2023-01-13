#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //char *cumle=(char *)malloc(sizeof (char));
    //gets(cumle);
    char cumle[1000];
    char ulkeler[50][30];
    int sayilar[50];
    int yazildimi[50]= {0};
    int ulkesayisi=0;
    printf("Ulke isimlerini ve oranlarini giriniz: ");
    fgets(cumle,1000,stdin);
    printf("\nUlkelerin siralamasi ve oranlar: \n");
    int i=0,j;
    while(cumle[i]!='\n')
    {
        int harfsayisi=0;
        while((cumle[i]>='A' && cumle[i]<='Z') || cumle[i]>='a' && cumle[i]<='z')
        {
            ulkeler[ulkesayisi][harfsayisi]=cumle[i];
            harfsayisi++;
            i++;
        }
        ulkeler[ulkesayisi][harfsayisi]='\0';
        char sayi[5];

        harfsayisi=0;
        while(cumle[i]>='0' && cumle[i]<='9')
        {
            sayi[harfsayisi]=cumle[i];
            harfsayisi++;
            i++;
        }
        sayilar[ulkesayisi]=atoi(sayi);
        ulkesayisi++;
    }
    int eb,enbuyukindis;
    for(i=0; i<ulkesayisi; i++)
    {
        eb=-1;
        enbuyukindis=-1;
        for(j=0; j<ulkesayisi; j++)
        {
            if(!yazildimi[j]&&sayilar[j]>eb)
            {
                eb=sayilar[j];
                enbuyukindis=j;
            }
            else if(!yazildimi[j] && sayilar[j]==eb && ulkeler[j][0]<ulkeler[enbuyukindis][0])
            {
                eb=sayilar[j];
                enbuyukindis=j;
            }
        }
        printf("%s %d\n",ulkeler[enbuyukindis],sayilar[enbuyukindis]);
        yazildimi[enbuyukindis]=1;
    }


    return 0;
}

/*

    int n = strlen(cumle);

    for(int i=0;i<n;i++){
        if(isdigit(*(cumle+i))&&isalpha(*(cumle+i-1))){
            printf(":");
        }

        if(isalpha(*(cumle+i))&&isdigit(*(cumle+i-1))){
            printf("\n");
        }

        printf("%c", *(cumle+i));
    }
    */
