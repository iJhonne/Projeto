package Exer_02;
import java.util.Scanner;

public class Banco {
    
    public static void main(String aregs[]) {
        Scanner leitor = new Scanner (System.in) ;
        long numero, titular, saldo;
        
        
        System.out.println("Digite o numero");
        numero = leitor.nextLong();
        
        System.out.println("Digite o titular");
        titular = leitor.nextLong();
        
        System.out.println("Digite o numero");
        saldo = leitor.nextLong();
        
        NaoPoupe cli = new NaoPoupe (numero, titular, saldo);
        cli.mostrar();
    }
}
