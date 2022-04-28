#include <stdio.h> //Blicioteca de Funções
#include <string>

int main(){
	
	float A;
	float peso_i, peso_if;	   // Declaração de Variaveis
	char sexo;	                     
	
	printf(" Informe com seu sexo (F para femminino e M para masculino): ");
	scanf("%c",&sexo);
	
	printf("Entre com sua altura: ");
	scanf("%f", &A);
	
	if(sexo == 'M'){
		peso_i = (450.7 * A) / 10;		
			printf("O peso ideial do corpo masculino eh: %.2f\n", peso_i);
		
	}else{
		
	if(sexo == 'F'){
		peso_if = (400.7 * A) / 10;
			printf("O peso ideial do corpo feminino eh: %.2f\n", peso_if);
	}
	else{
		printf("Valor Invalido, Entre com M ou F!");
	}
}
	return 0;
}
