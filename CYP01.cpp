#include <iostream>

void main()
{
    int ancho, alto,x,y,pa, pb, resultado, resultado1;
    scanf_s("%i", &ancho);
    scanf_s("%i", &alto);
    scanf_s("%i", &x);
    scanf_s("%i", &y);
    scanf_s("%i", &pa);
    scanf_s("%i", &pb);
    resultado = (ancho * x);
    resultado1 = (alto * y);
    printf("%i", ancho); printf("%10.2i", alto); printf("%10.2i", x); printf("%10.2i", y); printf("%10.2i", pa); printf("%10.2i", pb); printf("%10.2i", resultado); printf("%10.2i", resultado1);
}
