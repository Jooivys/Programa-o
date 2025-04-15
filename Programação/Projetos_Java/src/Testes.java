import java.util.Scanner;

public class Testes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nome, email, idade;
        String continuar;

        System.out.print("Digite seu nome: ");
        nome = sc.nextLine();
        System.out.print("Digite seu email: ");
        email = sc.nextLine();
        System.out.print("Digite sua idade: ");
        idade = sc.nextLine();

        System.out.println("Nome: " + nome + "\nEmail: " + email + "\nIdade: " + idade);
        System.out.print("Confirma seus dados? (s/n) ");
        continuar = sc.nextLine();
        if (continuar.equalsIgnoreCase("s")) {
            System.out.println("Cadastro realizado");
        } else {
            System.out.println("Cadastro finalizado");
        }

        sc.close();

    }
}