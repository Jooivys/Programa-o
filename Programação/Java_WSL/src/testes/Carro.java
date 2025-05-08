package gpt_professor;

public class Carro {
    private String nome;
    private String modelo;
    private int ano;
    private double velocidadeAtual;

    public Carro(String nome, String modelo, int ano, double velocidadeAtual) {
        this.nome = nome;
        this.modelo = modelo;
        this.ano = ano;
        this.velocidadeAtual = velocidadeAtual;
    }

    // Getters
    public String getNome() {
        return nome;
    }

    public String getModelo() {
        return modelo;
    }

    public int getAno() {
        return ano;
    }

    public double getVelocidadeAtual() {
        return velocidadeAtual;
    }

    //Setters
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    //Metodos
    public void acelerar(double incremento) {
        this.velocidadeAtual += incremento;
    }

    public void frear(double decremento) {
        this.velocidadeAtual -= decremento;
        if (this.velocidadeAtual < 0) {
            this.velocidadeAtual = 0;
        }
    }

    public void exibirInformacoes() {
        System.out.println("Nome: " + nome);
        System.out.println("Modelo: " + modelo);
        System.out.println("Ano: " + ano);
        System.out.println("Velocidade Atual: " + velocidadeAtual + " km/h");
    }

}

