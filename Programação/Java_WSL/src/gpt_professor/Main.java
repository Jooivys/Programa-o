package gpt_professor;

public class Main {
    public static void main(String[] args) {
        Carro carro1 = new Carro("FIAT","afb",2022,200.00);
        carro1.exibirInformacoes();
        carro1.frear(5);
        System.out.println(carro1.getVelocidadeAtual());
    }

}
