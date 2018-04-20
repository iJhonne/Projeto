#include <stdio.h>
#include <conio.h>
int main (){
	float nota[5];
	float soma,media;
	int i;
	soma=0;
	printf("Escreva os valos das cinco notas:\n");
	for(i=0;i<5;i++)
		scanf("%f",&nota[i]);
	for(i=0;i<5;i++){
		soma=soma+nota[i];
	}
	media=soma/5;
	printf("Soma das notas:%0.1f Media das notas:%0.1f",soma,media);
	getch ();
	return 0;
	}
