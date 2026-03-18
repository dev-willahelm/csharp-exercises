#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	int opcao;
	
	do{
		printf("Digite uma opcao:\n");
		printf("1 - Consultar saldo\n");
		printf("2 - Pagar fatura\n");
		printf("3 - Fazer emprestimo\n");
		printf("4 - Estatisticas de uso\n");
		printf("9 - Sair\n");
		fflush(stdin);
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1: {
				printf("Consultando saldo bancario...\n");
				break;
			}
			case 2: {
				printf("Pagando fatura, aguarde...\n");
				break;
			}
			case 3: {
				printf("Analisando dados para emprestimo...\n");
				break;
			}
			case 4: {
				printf("Digite um valor:\n");
				float estimativaGasto;
				fflush(stdin);
				scanf("%f", &estimativaGasto);
				
				if(estimativaGasto > 0 && estimativaGasto < 1000){
					printf("Voce esta economizando.\n");
				} else if(estimativaGasto >= 1000 && estimativaGasto < 2000){
					printf("Voce esta gastando um pouco mais.\n");
				} else {
					printf("Voce esta gastando muito!\n");
				}
				break;
			}
			case 9: {
				printf("Saindo...\n");
				break;
			}
			default : {
				printf("Opcao invalida.\n");
				break;
			}
		}
		
	}while(opcao != 9);
	
	return 0;
}