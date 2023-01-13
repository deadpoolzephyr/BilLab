//170202037 Arda Talu

#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Sayi giriniz: ");
    int i;
    char kelime, sayi[500];
    fgets(sayi,500,stdin);
    FILE *fp = fopen ("quiz8.txt", "w");

    for(i=0; sayi[i]!='\n' && sayi[i]!='\0'; i++){
        kelime=sayi[i];
        switch(kelime){
        case '0':
            printf("sifir ");
            fprintf(fp,"sıfır ");
            break;
        case '1':
            printf("bir ");
            fprintf(fp,"bir ");
            break;
        case '2':
            printf("iki ");
            fprintf(fp,"iki ");
            break;
        case '3':
            printf("uc ");
            fprintf(fp,"üç ");
            break;
        case '4':
            printf("dort ");
            fprintf(fp,"dört ");
            break;
        case '5':
            printf("bes ");
            fprintf(fp,"beş ");
            break;
        case '6':
            printf("alti ");
            fprintf(fp,"altı ");
            break;
        case '7':
            printf("yedi ");
            fprintf(fp,"yedi ");
            break;
        case '8':
            printf("sekiz ");
            fprintf(fp,"sekiz ");
            break;
        case '9':
            printf("dokuz ");
            fprintf(fp,"dokuz ");
            break;
        default:
            printf("-rakam degil- ");
            fprintf(fp,"-rakam deðil- ");
            break;
        }
    }
    printf("\nDosyaya kaydedilmistir.\n");
    fclose(fp);

    return 0;
}
