#include <stdio.h>

#include <stdlib.h>

//prototipos das fun??es

float CalculaMedia(float n1, float n2, float n3, float n4);

void AprovadoReprovado(float media);

int main(){

   //declara??o das variaveis

   float n1,n2,n3,n4;

   int resp;

   //inicio do la?o de repeti??o

       do{

       printf("Insira a Nota 1\n");

       scanf("%f",&n1);

       printf("Insira a Nota 2\n");

       scanf("%f",&n2);

       printf("Insira a Nota 3\n");

       scanf("%f",&n3);

       printf("Insira a Nota 4\n");

       scanf("%f",&n4);

       //fim do bloco de entrada do usuario

       printf("Nota1: %.2f\n Nota2: %.2f\n Nota3: %.2f\n Nota4: %.2f\n",n1,n2,n3,n4);//impress?o das notas

       printf("Media = %.2f\n",CalculaMedia(n1,n2,n3,n4));//mostra a m?dia na tela

       AprovadoReprovado(CalculaMedia(n1,n2,n3,n4));//verifica se foi aprovado

       printf("Deseja calcular outra nota Sim = 1/Nao = 0 ?\n");

       scanf("%d",&resp);

       }while(resp == 1);

   return 0;

}

float CalculaMedia(float n1, float n2, float n3, float n4){

   float media;

   media = ((n1+n2+n3+n4)/4);

   return media;

}

void AprovadoReprovado(float media){

   if(media >= 6.0){

       printf("Aprovado\n");

   }else{

       printf("Reprovado\n");

   }

}
