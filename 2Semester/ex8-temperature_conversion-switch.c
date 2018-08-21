#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv){

        /* Variaveis */
        float tempIn = 0, tempOut = 0;
        char resp = ' ';

        /* Entrada temperatura */
        printf("Digite a temperatura em Celsius:\n");
        scanf("%f",&tempIn);

        /* Entrada conversao */
        printf("\nVoce deseja converter para (k)elvin ou (f)ahrenheit?\n");
        //fflush(stdin);
        scanf(" %c",&resp);

        /* Calculo temperatura */
        if(resp=='k'){
                tempOut = tempIn + 273.15;
        }else if(resp == 'f'){
                tempOut = (1.8 * tempIn) + 32;
        }

        /* Exibicao do resultado */
        switch(resp)
	{
		case 'k':
			printf("\nTemperatura em Kelvin: %.2f\n",tempOut);
			break;

		case 'f':
			printf("\nTemperatura em Fahrenheit: %.2f\n",tempOut);
			break;

		default:
			printf("\nSelecao invalida!!\n");
			break;
	}
}

