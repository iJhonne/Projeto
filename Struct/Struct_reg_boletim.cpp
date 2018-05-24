#include <stdio.h>
#include <conio.h>
struct reg{
char nome[30];
int faltas;
float nota1,nota2,media;
};
int main(){
	struct reg boletim;
	printf("Nome do aluno:");
	fflush(stdin);
	gets(boletim.nome);
	printf("Faltas");
	scanf("%d",&boletim.faltas);
	printf("Primeira nota");
	scanf("%f",&boletim.nota1);
	printf("Segunda nota");
	scanf("%f",&boletim.nota2);
	boletim.media = (boletim.nota1 + boletim.nota2)/2;
	if(boletim.media>=6 && boletim.faltas<=5)
		printf("%s Aprovado\n\n",boletim.nome);
		else
		printf("%s Reprovado\n\n",boletim.nome);
		getch();
		return 0;
}
