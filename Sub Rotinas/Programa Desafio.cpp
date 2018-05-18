#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
void por_ref(int *y,int *x){
}
int main(){
	int a,b,c;
	printf("Digite o primeiro valor");
	scanf("%d",&a);
	printf("Digite o segundo valor");
	scanf("%d",&b);
	printf(" a=%d b=%d\n\n",a,b);
	void=(&a,&b);
	getch ();
	return 0 ;
}
