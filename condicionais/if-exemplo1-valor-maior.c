#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float numero;
	printf("Digite um numero inteiro: \n");
	scanf("%f", &numero);
	if(numero > 10){
		printf("Maior do que 10.\n");	}
	return 0;
}