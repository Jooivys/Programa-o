package Atividades;

class Usuario {
    private String login;
    private String senha;
    private String tipo;
    private static int totalUsuarios = 0;

    public Usuario(String login, String senha, String tipo) {
        this.login = login;
        this.senha = senha;
        this.tipo = tipo;
        totalUsuarios++;
    }

    public boolean autenticar(String login, String senha) {
        return this.login.equals(login) && this.senha.equals(senha);
    }

    public void alterarSenha(String novaSenha) {
        this.senha = novaSenha;
    }

    public String getTipo() {
        return tipo;
    }

    public static int getTotalUsuarios() {
        return totalUsuarios;
    }
}

