#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("Digite quantos anos de servico voce tem\n");
	int anosDeservico;
	scanf("%d", &anosDeservico);
	
	if (anosDeservico > 60){
		printf("o que voce ainda faz aqui?\n");
	}else if(anosDeservico == 0){
		printf("falta muito amigao\n");
	}else if(anosDeservico >= 10){
		printf("Parabens, voce eh nosso escravo\n");
	}else{
		printf("ainda tem muito pela frente\n");
	}

	return 0;
}
