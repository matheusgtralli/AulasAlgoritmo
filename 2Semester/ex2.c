#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){

/* Declaração das variáveis */
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float n4 = 0;
	float media = 0;

	printf("Ola mundo\n");

/* Leitura das variáveis */
	printf("Entre com n1:\n");
	scanf("%f",&n1);
	printf("Entre com n2:\n");
	scanf("%f",&n2);
	printf("Entre com n3:\n");
	scanf("%f",&n3);
	printf("Entre com n4:\n");
	scanf("%f",&n4);

/* Cálculo da média */
	media = (n1+n2+n3+n4)/4;

/* Impressão da média */
	printf("Media %f\n",media);

/* Checa se a média calculada é maior ou igual a 6.0
para imprimir a mensagem de Aprovado ou Reprovado */
	if(media >= 6.0){
		printf("Aprovado\n");
	}else{
		printf("Reprovado\n");
	}

/* Checa se a nota foi diferente de 10 e exibe mensagem */
	if(media != 10){
		printf("Da pra melhorar essa nota!!\n");
	}
}
