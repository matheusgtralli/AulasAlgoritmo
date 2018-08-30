#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	/* Declarando variaveis */
	int *vet;
	int n = 0;
	int i = 0;
	int resUsuario = 0;

	/* Lendo numeros */
	printf("Entre com um numero:\n");
	scanf("%i",&n);

	/* Alocando memoria para vetor */
	vet = (int*) calloc(100,sizeof(int));

	/* Lendo e armazenando numeros no vetor */
	for(i = 0;i < n;i++){
		printf("Digite um numero:\n");
		scanf("%i",&resUsuario);
		
		vet[i] = resUsuario;
	}

	/* Exibindo resultado */
	printf("Exibindo valores do vetor...\n\n");
	for(i = 0;i < n;i++){
		printf("Posicao %i: %i\n",i,vet[i]);
	}

}
