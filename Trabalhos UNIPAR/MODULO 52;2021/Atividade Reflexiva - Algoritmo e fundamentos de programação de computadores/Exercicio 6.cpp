#include <stdio.h> // Bliblioteca de funcoes
#include <stdlib.h>

int main(){
	
	int F=40;
	float C;
	
	printf("A conversao de Fahrenheit para Celsius eh: \n");
	
	for(int f = 40; F < 61; F=F+1){
			
		C = 5.0/9.0 * (F-32); //Formula
		 printf("%dF = %.2fC\n",F, C);
	
	}
 
	return 0;
}
