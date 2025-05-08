package Atividades;

public class Main {
    public static void main(String[] args) {
        Usuario usuario1 = new Usuario("jose", "1234", "comum");
        Usuario usuario2 = new Usuario("admin", "admin123", "administrador");

        System.out.println("Autenticação usuário 1: " + usuario1.autenticar("jose", "1234"));
        System.out.println("Autenticação usuário 2: " + usuario2.autenticar("admin", "admin123"));

        usuario1.alterarSenha("novaSenha123");
        System.out.println("Autenticação após alterar senha (usuário 1): " + usuario1.autenticar("jose", "novaSenha123"));

        System.out.println("Total de usuários registrados: " + Usuario.getTotalUsuarios());
    }
}
