#include <stdio.h>

int main ()
{
    char Cal_1, Cal_2, Cal_3; //calificacion en letra
    float Prom, Suma;
    float C1,C2,C3;

    puts("Escibe primer calificacion en letra: ");
    scanf("%c",&Cal_1);
    puts("Escibe segunda calificacion en letra: ");
    fflush( stdin );
    scanf("%c",&Cal_2);
    puts("Escibe tercera calificacion en letra: ");
    fflush( stdin );
    scanf("%c",&Cal_3);


/*---------------- Calificacion 1 --------------*/

if (Cal_1=='A' || Cal_1=='a')
    C1=10;
else if (Cal_1=='B' || Cal_1=='b')
    C1=9;
else if (Cal_1=='C' || Cal_1=='c')
    C1=8;
else if (Cal_1=='D' || Cal_1=='d')
    C1=7;
else if (Cal_1=='E' || Cal_1=='e')
    C1=6;
else
    C1=5;

/*---------------- Calificacion 2 --------------*/

if (Cal_2=='A' || Cal_2=='a')
    C2=10;
else if (Cal_2=='B' || Cal_2=='b')
    C2=9;
else if (Cal_2=='C' || Cal_2=='c')
    C2=8;
else if (Cal_2=='D' || Cal_2=='d')
    C2=7;
else if (Cal_2=='E' || Cal_2=='e')
    C2=6;
else
    C2=5;

/*---------------- Calificacion 3 --------------*/

if (Cal_3=='A' || Cal_3=='a')
    C3=10;
else if (Cal_3=='B' || Cal_3=='b')
    C3=9;
else if (Cal_3=='C' || Cal_3=='c')
    C3=8;
else if (Cal_3=='D' || Cal_3=='d')
    C3=7;
else if (Cal_3=='E' || Cal_3=='e')
    C3=6;
else
    C3=5;

/*----------------- Promedio ---------------*/

Suma= C1+C2+C3;
Prom= Suma/3;

if (Prom==10)
    printf ("\n ¡¡¡Felicidades!!!");
else if (Prom==9)
    printf ("\n Autonomo");
else if (Prom==8)
    printf ("\n Alumno promedio");
else if (Prom==7)
    printf ("\n Suficiente");
else if (Prom==6)
    printf ("\n Requieres retroalimentacion");
else
    printf ("\n Reprobado");
    printf ("\n\n Promedio general: %.2f\n\n",Prom);

    return 0;
}
