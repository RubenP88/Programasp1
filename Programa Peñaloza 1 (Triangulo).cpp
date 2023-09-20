#include <math.h>
#include <iostream>

int main()
{
	float area, altura,base;
	printf("INSERTA LA BASE:");
	scanf_s("%f", &base);
	printf("INSERTA LA ALTURA:");
	scanf_s("%i", &altura);
	area = (base * altura) / 2;
	printf("AREA: %10.2f",&area);

}


