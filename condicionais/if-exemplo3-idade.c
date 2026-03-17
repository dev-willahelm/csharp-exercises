#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float numero;
	printf("Digite a sua idade\n");
	scanf("%f", &numero);
	if(numero >= 18){
		printf("Maior de idade\n");
	}
	else{
		printf("Menor de idade\n");
	}
	return 0;
}