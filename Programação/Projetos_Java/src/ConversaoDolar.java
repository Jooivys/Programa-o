import java.util.Scanner;

class Dolar{
    protected final double  taxaCambio =  5.69;
    protected double real;
    protected double valorFinal() {
       return real / taxaCambio;
    }
}
public class ConversaoDolar {
    public static void main(String[] args) {
        Dolar dolar = new Dolar();
        Scanner sc = new Scanner(System.in);
        System.out.println("Digte o valor em real Brasileiro: ");
        dolar.real = sc.nextDouble();
        System.out.println("O valor de real em dolar será: "+dolar.valorFinal());
        sc.close();
    }
}
