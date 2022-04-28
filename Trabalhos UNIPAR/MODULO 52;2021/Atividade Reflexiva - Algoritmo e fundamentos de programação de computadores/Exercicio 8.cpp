#include<stdio.h>

int main(){

	int mat[4][5];
	int soma;
	int l,c;
	
	for(l = 0; l < 4; l++){
		for(c = 0; c< 5; c++){
			printf("Digite um valor para a linha [%d] e coluna [%d]: ", l + 1, c + 1);
			scanf("%d", &mat[l][c]);
			soma += mat[4][5];
		}
	}
	
	printf("\n");
	  for (c = 0; c < 5; c++) {
        for (l = 0; l < 4; l++) 
		printf("%d ",mat[l][c]);
        printf("\n");
    }
    
	for(c = 0; c < 5; c++){
		soma = 0;
		for(l = 0; l < 4; l++){
			soma = soma + mat[c][l];
		}
		printf("O valor da coluna eh: %d\n", soma);	
	}
   
}
