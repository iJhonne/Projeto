#include <stdio.h>
#include <conio.h>
#define N 3
int main(){
	int matriz[N][N];
	int i,linha,coluna,impar;
printf("Soma dos numero impares:\n\n");
impar=0;
for(linha=0;linha<N;linha++)
for(coluna=0;coluna<N;coluna++){
scanf("%d",&matriz[linha][coluna]);
if(matriz[linha][coluna]%2!=0)
impar=impar+1;
}
printf("Numeros impar:%d",impar);
getch ();
	return 0;
}

