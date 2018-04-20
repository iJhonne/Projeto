#include <stdio.h>
#include <conio.h>
#define T 15
int main(){
	int i,t;
	float vetor[T];
	printf("Digite os 15 valores do vetor\n");
	for(i=0;i<15;i++){
		scanf("%f",&vetor[i]);
	}
	for(i=0;i<15;i++){
		printf("Valor vetor:%0.1f\n\n",vetor[i]);
				vetor[i]=vetor[i]/2;
	}
	for(i=0;i<15;i++)
	printf("Vetor:%0.1f\n\n",vetor[i]);
	getch ();
	return 0;
}
