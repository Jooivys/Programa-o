import java.util.Scanner;

class Dados{
    public double peso;
    public double altura;
    public double calcularIMC(){
        return (peso / (altura * altura));
    }
}
public class IMC {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Dados dados = new Dados();
        System.out.println("Digite seu peso: ");
        dados.peso = sc.nextDouble();
        System.out.println("Digite sua altura com virgula: ");
        dados.altura = sc.nextDouble();
        System.out.println("Seu IMC será: "+dados.calcularIMC());
        sc.close();
    }
}
