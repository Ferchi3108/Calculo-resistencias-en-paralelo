//Calcular resistencia para LEDS//

#include <stdio.h>

int main()
{
    float VI, RA, Ra, RR;

    printf ("Escribe el valor de la fuente V: ");
    scanf ("%f", &VI); // Recibe valores tecleados
    printf ("\n");

    RA= (VI-3)/0.02;      //Calculo para Resistencia de led Azul
    Ra= (VI-1.8)/0.015;   //Calculo para Resistencia de led Amarillo
    RR= (VI-1.5)/0.015;   //Calculo para Resistencia de led Rojo

    printf ("Resistencia necesaria para led Azul es:     %.2f Ohms\n\n",RA);
    printf ("Resistencia necesaria para led Amarillo es: %.2f Ohms\n\n",Ra);
    printf ("Resistencia necesaria para led Rojo es:     %.2f Ohms\n\n",RR);


return 0;

}
