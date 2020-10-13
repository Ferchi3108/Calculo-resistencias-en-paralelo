#include<stdio.h>
int main()
{
    system("COLOR 09");
    int Regresivo;
    int N, C;
    char opc='s';

    while (opc=='s')
    {
    printf("Inicio de valor regresivo: \n");
    scanf("%d",&N);
    C=N*2+1;
    Regresivo=3*N+2*C;
        while(Regresivo>=3*N)
        {
            printf(" %d ",Regresivo);
            Regresivo=Regresivo-2;
        }
        printf ("\n\n Quieres ver otros valores s/n: ");
        scanf ("%s", &opc);

    }
        printf("\n\n fin del ciclo \n\n");
    return 0;
}
