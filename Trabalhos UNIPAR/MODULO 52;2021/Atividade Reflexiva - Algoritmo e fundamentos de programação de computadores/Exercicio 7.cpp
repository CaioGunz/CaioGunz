#include <stdio.h> // Blibioteca de funções


int main(){
	
	int i, vetor [11], numero; // Declaração do vetor
	
	for(i =0; i < 10; i++){
		printf("Entre com um valor: ");
		scanf("%d", &vetor[i]);
	}
		for(i =0; i < 10; i++){
		printf("\nvetor[%d] = %d\n", i, vetor[i]);
	}
	
	return 0;
}
