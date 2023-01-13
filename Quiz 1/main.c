/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Nilpotent(int n)
{
    int i,j;
    int A[n][n],B[n][n];
    printf("Olusturulan matris:\n");

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            A[i][j]=rand()%1000;
            printf("%d  ",A[i][j]);

            B[i][j] = A[i][j] * A[i][j] + B[i][j];


        }
        printf("\n");
    }
    if(B[i][j]==0)
        printf("Matris nilpotent dir.");
    else
        printf("Matris nilpotent DEGILDIR!.");


};

int main()
{
    srand(time(NULL));
    int n,i,j;
baslangic:
    printf("Matrisin boyutunu giriniz!\n");
    scanf("%d",&n);

    if(n<2)
    {
        printf("Boyut uygun değil.\n");
        goto baslangic;
    }

    else
    {
        Nilpotent(n);
    }
    return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int N;

int NilpotentMi(int X[][N]){

    int Y[N][N],Z[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            Y[i][j] = X[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int toplam = 0;
            for(int k=0;k<N;k++){
                toplam = toplam + (X[i][k]*Y[k][j]);
            }
            Z[i][j] = toplam;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(Z[i][j] != 0){
                return 0;
            }
        }
    }

    return 1;

}

void main()
{

    srand(time(NULL));

    printf("Matrisin boyutunu giriniz : ");
    scanf("%d",&N);

    int matris[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matris[i][j]=rand()%11-5;
        }
    }
    printf("\nOlusturulan Matris : \n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
                printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }

    int kontrol = NilpotentMi(matris);

    printf("\n");
    if(kontrol == 0)
        printf("Matris nilpotent degil.\n");
    else
        printf("Matris nilpotent.\n");

}
