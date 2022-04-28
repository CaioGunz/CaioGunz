#include <stdio.h> // blibioteca do C

int main() {
	
	int cont = 0;
	int numero = 0, acmNumero = -1, soma;
	
	printf("Entre com 20 numeros: \n");
	
	cont = 0; //inicializando o cotador
	while(cont < 20){
		printf("Digite a %i o numero: \n", (cont+1) );
		scanf("%d", &numero);
		acmNumero = acmNumero + numero; // acumulação de numeros
		cont = cont + 1; // incrementa
	}
	
	soma = acmNumero + numero;
	
	printf("A soma de todos os valores eh: %d", soma);
	
	return 0;
}
