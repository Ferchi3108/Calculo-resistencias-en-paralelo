//Tarea Calculo de Corriente y voltaje en circuito paralelo///

#include <stdio.h>

int main ()
{
    float V;
    float R, R1, R2, R3, RT;
    float I;

    printf ("Escribe el valor de la fuente V: ");
    scanf ("%f", &V); // Recibe valores tecleados

    printf ("Escribe el valor de R1,R2, y R3, separados por comas: ");
    scanf ("%f, %f, %f", &R1, &R2, &R3);
    R=1/R1+1/R2+1/R3;
    RT=1/R;  //Resistencia Total
    printf ("RT %.3f Ohms\n", RT);
    I=V/RT;  //Corriente
    printf ("La corriente I es %.2fA\n", I);
    printf ("El voltaje en RT (%.3f ohms) es %.2fV\n",RT,I*RT);


return 0;
}
