public class LancarFoguete {
    public static void main(String[] args) {
        System.out.println("Iniciando contagem regressiva para o lançamento...");

        for (int i = 10; i >= 0; i--) {
            System.out.println(i);
            try {
                Thread.sleep(1000); // Atraso de um segundo para rodar o proximo for
            } catch (InterruptedException e) {
                System.out.println("Erro na contagem.");
            }
        }

        System.out.println("Foguete lançado!");
    }
}
