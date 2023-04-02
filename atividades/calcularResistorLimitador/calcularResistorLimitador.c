#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0;
float Vled = 0.0;
float Iled = 0.0;
float R = 0.0;

int main()
{
	printf("LED CALC v1.0 \n");
	printf("Autor: Jonathas Dos Santos C. \n");

	printf("Digite o valor de Vin (em Volts): ");
	scanf("%f", &Vin);

	printf("Digite o valor de Vled (em Volts): ");
	scanf("%f", &Vled);

	printf("Digite o valor de Iled (em Amperes): ");
	scanf("%f", &Iled);

	printf("\n------------------\n");

	printf("Vin = %.2f",Vin);
	printf("\nVled = %.2f\n",Vled);
	printf("Iled = %.2f",Iled);

	printf("\n------------------\n");

	R = (Vin-Vled)/Iled;
	printf("O resitor para o LED tem o valor %.2f Ohms\n\n",R);

	/* code */
	// system("PAUSE");
	return 0;
}
