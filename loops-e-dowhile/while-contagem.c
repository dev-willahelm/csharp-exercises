#include <stdio.h>
#include <stdlib.h>

int main() {
	
//		int i;
//	
//	for(i = 100; i >= 0; i--){
//		if(i < 50){
//			printf("Valor menor que 50... %d\n", i);
//		}else{
//			printf("Valor maior igual que 50... %d\n", i);
//		}
//	}


	int cont = 0;
	printf("Aguarde...\n");
	while(cont < 100){
		printf(".");
		cont++;
	}
	
	return 0;
}