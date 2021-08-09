#include <stdio.h>
#include <math.h>
#include "basico.h"
#include "cientifica.h"


int main (){

int accion;
float n1;
NUMEROS numeros;
 
do {
printf("Ingrese la operacion a realizar: ");
scanf("%d", &accion);



switch(accion) {
	case 1:
		printf("Ingrese los numeros a usar: \n");
		printf("#");
		scanf("%f", &numeros.numero1);
		printf("+\n");
		printf("#");
		scanf("%f", &numeros.numero2);
		printf("= %.2f", suma(&numeros));
		break;
	case 2:
		printf("Ingrese los numeros a usar: \n");
		printf("#");
		scanf("%f", &numeros.numero1);
		printf("-\n");
		printf("#");
		scanf("%f", &numeros.numero2);
		printf("= %.2f", resta(&numeros));
		break;
	case 3:
		printf("Ingrese los numeros a usar: \n");
		printf("#");
		scanf("%f", &numeros.numero1);
		printf("*\n");
		printf("#");
		scanf("%f", &numeros.numero2);
		printf("= %.2f", multiplicacion(&numeros));
		break;
	case 4:
		printf("Ingrese los numeros a usar: \n");
		printf("#");
		scanf("%f", &numeros.numero1);
		printf("/ \n");
		printf("#");
		scanf("%f", &numeros.numero2);
		printf("= %.2f", division(&numeros));
		break;
	case 5:
		printf("Ingrese el numero a usar: \n");
		printf("#");
		scanf("%f", &n1);
		raiz(&n1);
		printf("= %.2f", raiz(&n1));
		break;
	case 6:
		printf("Ingrese el numero a usar: \n");
		printf("#");
		scanf("%f", &n1);
		printf("= %.2f", factorial(&n1));
		break;
}
printf("\n");
} while (accion != 7);

return 0;
}
