#include <stdio.h>
#include <conio.h>
int main (){
	int i;
	printf("50 primeiros multiplos de 5\n\n");
	for(i=1;i<=50;i++)
	 if((i % 5 == 0)){
	 printf("%d e multiplo de 5\n\n",i);
}
	 else{
	 printf("Nao e multiplo de 5 \n\n");
}
	 getch ();
	 return 0 ;
	}
