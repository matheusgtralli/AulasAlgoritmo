#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){

   /* Variaveis */
   float kmInicio = 0, kmFim = 0, kmTotal = 0, totalRecebido = 0, lucro = 0, tanqueInicio = 0, tanqueFim = 0, tanqueTotal = 0, kmConsumo = 0, gasto = 0;

   /* Entrada de dados */
   printf("Entre com o KM no inicio do dia:\n");
   scanf("%f",&kmInicio);

   printf("Entre com o KM no fim do dia:\n");
   scanf("%f",&kmFim);

   printf("Entre com o total recebido:\n");
   scanf("%f",&totalRecebido);

   printf("Entre com litros do tanque no inicio do dia:\n");
   scanf("%f",&tanqueInicio);

   printf("Entre com litros do tanque no fim do dia:\n");
   scanf("%f",&tanqueFim);


   /* Calculos */
   kmTotal = kmInicio - kmFim;
   tanqueTotal = tanqueInicio - tanqueFim;
   kmConsumo = kmTotal / tanqueTotal;
   gasto = tanqueTotal * 0.9;
   lucro = totalRecebido - gasto;

   /* Exibicao de Resultados */
   printf("Consumo: %.2f/L\n",kmConsumo);
   printf("Lucro liquido: %.2f\n",lucro);
   
}
