import java.util.Scanner;
 class Aluno{
     protected double AV1;
     protected double AV2;
     protected double AV3;
     public final double media(){
         return (AV1 + AV2 + AV3) / 2;
     }
 }
public class MediaAluno {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Aluno aluno = new Aluno();
        System.out.println("Escreva a primeira nota: ");
        aluno.AV1 = sc.nextDouble();
        System.out.println("Escreva a segunda nota: ");
        aluno.AV2 = sc.nextDouble();
        System.out.println("Escreva a terceira nota: ");
        aluno.AV3 = sc.nextDouble();

        if (aluno.media() >= 7){
            System.out.println("Você está APROVADO ");
            System.out.println("Sua nota é "+aluno.media());
        } else {
            System.out.println("Você está REPROVADO");
            System.out.println("Sua nota é "+aluno.media());
        }
    }
}