#include<stdio.h>   // Blibioteca de Funções 
#include <stdlib.h>

int main(){
	
	float area, base, altura; // Declaração de Variaveis
	
	int cont = 0;

	do{

       printf("Tentativa: %d\n",cont+1);

       printf("Entre com a base do triangulo: ");
		scanf("%f",&base);

       printf("Insira a altura do triangulo: ");
       	scanf("%f",&altura);

       area = ((base*altura)/2);  // Formula

       printf("Area do tringulo:%.2f\n",area);

       cont = cont+1; 

   }
   while(cont < 6);

	return 0;
	
}
