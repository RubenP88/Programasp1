#include <math.h>
#include <iostream>

int main()
{
	int area, l1, l2;
	printf("INSERTA EL LADO 1:");
	scanf_s("%i", &l1);
	printf("INSERTA EL LADO 2:");
	scanf_s("%i", &l2);
	area = l1+l2+l1+l2;
	printf("AREA: %10i",&area);

}


