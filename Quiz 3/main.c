#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cumle[50];
    printf("Cumleyi giriniz : ");
    gets(cumle);
    int n = strlen(cumle);

    if(cumle[0] != ' ' && cumle[0] != '\0'){
        printf("%c\n", cumle[0]);
    }

    for(int i = 0; i < n; i++){
        if(cumle[i] == ' '){
            if(i + 1 < n && cumle[i + 1] != ' '){
                printf("%c\n", cumle[i + 1]);
            }
        }
    }

    return 0;
}
