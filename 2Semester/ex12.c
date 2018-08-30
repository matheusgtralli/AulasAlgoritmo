#include<stdio.h>

int main(int argc, char* argv[]){

   /* Variaveis */
   int i, idade, maiores;

   /* Inicializacao */
   idade = 0;
   maiores = 0;
   i = 0;

   /* Leitura dos dados */
   for(i = 0;i < 10;i++){
      printf("Digite a idade:\n");
      scanf("%i",&idade);

      if(idade >= 18){
      maiores++;
      }
   }

   /* Impressao do Resultado */
   printf("Quantidade de pessoas maiores de idade:%i\n",maiores);

}
