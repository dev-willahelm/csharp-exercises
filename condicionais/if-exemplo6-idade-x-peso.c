#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int idade;
	printf("Digite a idade do atleta:\n");
	scanf("%d", &idade);
	float peso;
	printf("Digite o peso do atleta\n");
	scanf("%f", &peso);
	if(idade >=18 && peso >= 80){
		printf("Adulto pesado.\n");
	}else if(idade >= 18 && peso >= 60){
		printf("Adulto leve.\n");
	}else if(idade <= 17 && peso >= 60){
		printf("Juvenil pesado\n");
	}else if(idade <= 17 && peso < 60){
		printf("Juvenil leve.\n");
	}else if(idade <= 12 && peso >= 0){
		printf("Infantil.\n");
	}else{
		printf("Invalido!\n");
}
	return 0;
}
