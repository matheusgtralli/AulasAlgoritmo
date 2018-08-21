#include<stdio.h>

int main(int argc, char** argv){
	int a=0;

	LOOP:
	if(a<15) {
		printf("value of a: %i\n",a);
		a++;
		goto LOOP;
	}

	printf("saida\n");

	return 0;

}
