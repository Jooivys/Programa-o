package testes;

public class Main {
    public static void main(String[] args) {
        Carro carro = new Carro("FIAT","afb",2022,200.00);
        carro.exibirInformacoes();
        carro.setNome("VRUMMMMMMMMM");
        carro.frear(5);
        System.out.println(carro.getVelocidadeAtual());
        carro.exibirInformacoes();
    }

}
