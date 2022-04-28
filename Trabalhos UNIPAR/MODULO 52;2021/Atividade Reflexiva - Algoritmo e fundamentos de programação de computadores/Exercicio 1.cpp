#include <stdio.h> //Blicioteca de Funções

int main(){
 
 	int l, a, c, Z; // Declaração de Variaveis
 	
 	printf("Para encontrar o valor de Z \n");
 	
 	printf("Entre com valor de L: ");
 		scanf("%d", &l);
 	
	printf("Entre com valor de A: ");
 		scanf("%d", &a);
 		
 	printf("Entre com o Valor de C: ");
 		scanf("%d", &c);
 		
 	Z = (l + a * 2.3) / c; // Formula
 	
 	printf("O Valor de Z eh: %d \n", Z);
 	

}
