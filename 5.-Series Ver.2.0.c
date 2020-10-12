#include<stdio.h>
int main()
{
    int Regresivo;
    int N, C;

    printf("Inicio de valor regresico:\n");
    scanf("%d",&N);

    C=0;
    Regresivo=3*N+2*C;


    while(Regresivo>=N)
    {
        printf("%d",Regresivo);
        C=C+1;
        Regresivo=Regresivo-2;
    }
    printf("\nfin del ciclo\n");
    return 0;
}

