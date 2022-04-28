#include <stdio.h>
#include <stdlib.h>  // Blibiotecas de Função
#include <conio.h> 
#include <string>

int main(){
	
	int opcao, decisao;
	
	inicio:
	system("cls");  // Menu
	system("color 0F");
	
	printf("1 - Exercicio 1 \n2 - Exercicio 2 \n3 - Exercicio 3 \n4 - Exercicio 4 \n");
	scanf("%d", &opcao);
	
	switch(opcao) {
		
		case 1: {
		system("cls");	
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
		
		break;
	}
	
		case 2: {
		system("cls");	
		float A;
		float peso_i, peso_if;	   // Declaração de Variaveis
		char sexo;	                     
	
			printf("Informe com seu sexo (F para femminino e M para masculino): ");
				scanf("%s",&sexo);
	
			printf("Entre com sua altura: ");
				scanf("%f", &A);

		if(sexo == 'M'){
		peso_i = (450.7 * A) / 10;		
			printf("O peso ideial do corpor masculino eh: %.2f\n", peso_i);
		
		}else{
		
		if(sexo == 'F'){
		peso_if = (400.7 * A) / 10;
			printf("O peso ideial do corpor feminino eh: %.2f\n", peso_if);
		}
		else{
		printf("Valor Invalido, Entre com M ou F!");
		}
	}	
	break;
}

	case 3: {
	system("cls");
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
	
		break;
	}
	case 4:	{
		printf("Fim de execucao!");
		exit(0);
	}
	default :{
		printf("Opacao invalida!!\n");
        printf("Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
		break;
		}
	}
	return (0);
}

