#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    printf ("Escribe el valor de N: ");
    scanf ("%d", &N);

    while (N>=0)
    {
        printf ("%d ",N--);

    }


    printf ("\nFin del ciclo");


    return 0;
}
