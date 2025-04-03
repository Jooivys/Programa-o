import java.util.Scanner;
 class Aluno{
     protected String nome;  // Uso de static para
     protected double AV1;
     protected double AV2;
     protected double CalcularMedia(){
         return (AV1 + AV2 ) / 2;
     }
 }
public class MediaAluno {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Aluno Aluno = new Aluno();
        System.out.println("Escreva seu nome: ");
        Aluno.nome = sc.nextLine();
        System.out.println("Escreva a primeira nota: ");
        Aluno.AV1 = sc.nextDouble();
        System.out.println("Escreva a segunda nota: ");
        Aluno.AV2 = sc.nextDouble();
        System.out.println(Aluno.nome+ " sua média será " +Aluno.CalcularMedia());
        sc.close();
    }
}