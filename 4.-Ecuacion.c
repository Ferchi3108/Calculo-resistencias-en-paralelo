#include<stdio.h>
int main()
{
    int A,B,C;
    int X,Y,Z,W,W1,S;
    float X1,X2;

    printf("Introduce valor de A:\n");
    scanf("%i",&A);
    printf("Introduce valor de B:\n");
    scanf("%i",&B);
    printf("Introduce valor de C:\n");
    scanf("%i",&C);

    X=sqrt(B);
    Y=4*A*C;
    Z=(X-Y)/((X-Y)/2);
    W=(-B)+Z;
    W1=(-B)-Z;
    S=2*A;
    X1=W/S;
    X2=W1/S;

    printf("el valor de x1 es %.2f\n",X1);
    printf("el valor de x2 es %.2f\n",X2);

    return 0;

}
