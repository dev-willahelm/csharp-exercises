#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float nota;
	printf("insira a nota do aluno\n");
	scanf("%f", &nota);
	if (nota == 10){
		printf("Excelente!\n");
	}else if(nota >= 8){
		printf("Muito bom\n");
	}else if(nota >= 6){
		printf("Bom\n");
	}else if(nota >= 4){
		printf("recuperacao\n");
	}else if(nota >= 0){
		printf("Reprovado!\n");
	}else{
		printf("Reprovado!\n");
	}
	
	return 0;
}