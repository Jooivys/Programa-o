import java.util.Scanner;

class Usuario{
    protected String nome;
    protected String idade;
    protected String email;
}
public class Cadastro {
    public static void main(String[] args) {
        Usuario usuario = new Usuario();
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite seu nome:");
        usuario.nome = sc.nextLine();
        System.out.println("Digite sua idade:");
        usuario.idade = sc.nextLine();
        System.out.println("Digite seu email:");
        usuario.email = sc.nextLine();
        System.out.println("Cadastro realizado com succeso");
        System.out.println("Seu nome: "+usuario.nome);
        System.out.println("Sua idade: "+usuario.idade);
        System.out.println("Seu email: "+usuario.email);
        sc.close();
    }
}
