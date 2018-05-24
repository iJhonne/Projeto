#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
	struct regPessoa{
		char nome[20];
		int idade;
		char sexo;
		float altura;
	};
	struct regPessoa aluno;
	printf("Entrada de dados em struct\n\n");
	printf("Digite o nome do aluno:");
	fflush(stdin);
	gets(aluno.nome);
	printf("Digita a idade do aluno:");
	scanf("%d",&aluno.idade);
	printf("Digite o sexo do aluno:");
	fflush(stdin);
	scanf("%c",&aluno.sexo);
	printf("Digite a altura do aluno:");
	scanf("%f",&aluno.altura);
	printf("\n\n***Valores Digitados***");
	printf("\nNome do Aluno:%s",aluno.nome);
	printf("\nIdade do aluno:%d",aluno.idade);
	printf("\nSexo do aluno:%c",aluno.sexo);
	printf("\nAltura do aluno:%.2f",aluno.altura);
	getch();
	printf("\n\nAtribuicao de dados em struck\n\n");
	strcpy(aluno.nome,"Jorge da silva");
	aluno.idade=23;
	aluno.sexo='M';
	aluno.altura=1.73;
	printf("\n\nNome do aluno...:%s",aluno.nome);
	printf("\nIdade do aluno...:%d",aluno.idade);
	printf("\nSexo do aluno ...:%c",aluno.sexo);
	printf("Altura do aluno ...:%.2f",aluno.altura);
	getch();
	return 0;
}
