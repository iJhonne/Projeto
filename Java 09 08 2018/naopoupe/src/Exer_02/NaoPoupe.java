package Exer_02;

public class NaoPoupe {
    Long _numero;
    Long _titular;
    Long _saldo;
            

public NaoPoupe (long numero, long titular, long saldo) {
    _numero = numero;
    _titular = titular;
    _saldo = saldo;
    
}

    public void mostrar () {
        System.out.println("Digite o seu numero" + _numero);
        System.out.println("Digite o seu titulo" + _titular);
        System.out.println("Digite o seu saldo" + _saldo);
    }
}
