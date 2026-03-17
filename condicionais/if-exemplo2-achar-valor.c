#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float num;
	printf("Digite um numero.\n");
	scanf("%f", &num);
	if(num > 10 && num < 20){
		printf("Valor entre 10 e 20.\n");
	}
	return 0;
}