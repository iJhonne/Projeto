# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <locale.h>
int main ( ) {
    setlocale ( LC_ALL, "Portuguese" ) ;
    printf ( "Programa: troco.c\n\n" ) ;
	float vl_prod, soma, pago, troco, i ;
    soma = 0 ;
    for ( i = 1; i <=5; i++ )
	 {
        printf ( "Digite o valor do produto: " ) ;
        scanf ( "%f", &vl_prod ) ;
        soma = soma + vl_prod ;  	
	}
    printf ( "Valor a pagar R$%.2f\n",soma ) ;
    do {
        printf ( "\nRecebido R$:" ) ;
        scanf ("%f", &pago ) ;
      if(pago>=soma){
             troco = pago-soma ;
             printf("\nTroco R$:%0.2f\n",troco);
		
        }else
             printf ( "\nValor Insuficiente\n" ) ;
   } while ( pago <= soma );
    getch ( ) ;
    return 0 ;
}
