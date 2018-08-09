#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){

/* Declaração das variáveis */
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int media = 0;

	printf("Ola mundo\n");

/* Leitura das variáveis */
	printf("Entre com n1:\n");
	scanf("%i",&n1);
	printf("Entre com n2:\n");
	scanf("%i",&n2);
	printf("Entre com n3:\n");
	scanf("%i",&n3);
	printf("Entre com n4:\n");
	scanf("%i",&n4);

/* Cálculo da média */
	media = (n1+n2+n3+n4)/4;

/* Impressão da média */
	printf("Media %i\n",media);
}
