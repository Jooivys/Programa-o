import java.util.Scanner;
 class Aluno{
     protected static String nome;  // Uso de static para
     protected static double AV1;
     protected static double AV2;
     protected static double CalcularMedia(){
         return (AV1 + AV2 ) / 2;
     }
 }
public class Testes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Escreva seu nome: ");
        Aluno.nome = sc.nextLine();
        System.out.println("Escreva a primeira nota: ");
        Aluno.AV1 = sc.nextDouble();
        System.out.println("Escreva a segunda nota: ");
        Aluno.AV2 = sc.nextDouble();
        System.out.println(Aluno.nome +" sua média será "+Aluno.CalcularMedia());
        sc.close();
    }
}