import java.util.Scanner; // Biblioteca de entrada de dados

class Aluno {
    private final String nome; // Private é que não pode ser acessada por outra classe 
    private final double[] notas;

    public Aluno(String nome, int numMaterias) {
        this.nome = nome;
        this.notas = new double[numMaterias];
    }

    public void setNota(int materia, double nota) {
        if (materia >= 0 && materia < notas.length) {
            notas[materia] = nota;
        }
    }

    public double[] getNotas() {
        return notas;
    }

    public String getNome() {
        return nome;
    }
}

class CalculadoraMedia {
    public static double calcularMedia(double[] notas) {
        double soma = 0;
        for (double nota : notas) {
            soma += nota;
        }
        return soma / notas.length;
    }
}

public class MediaNotas {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        final int NUM_ALUNOS = 2;
        final int NUM_MATERIAS = 2;

        Aluno[] alunos = new Aluno[NUM_ALUNOS];

        // Entrada de dados
        for (int i = 0; i < NUM_ALUNOS; i++) {
            String nome;
            do {
                System.out.print("Digite o nome do aluno " + (i + 1) + ": ");
                nome = scanner.nextLine().trim(); //Guarda dados
            } while (nome.isEmpty() || nome.matches(".*\\d.*")); /* Verifica se há números no nome, se for,
                                                                          pede de novo o nome */


            alunos[i] = new Aluno(nome, NUM_MATERIAS);

            for (int j = 0; j < NUM_MATERIAS; j++) {
                System.out.print("Nota da matéria " + (j + 1) + " para " + nome + ": ");
                double nota = scanner.nextDouble(); // Guarda dados
                alunos[i].setNota(j, nota);
            }
            scanner.nextLine(); // Limpa o buffer do scanner
        }

        // Exibição das médias
        System.out.println("\nMédias dos alunos:");
        for (Aluno aluno : alunos) {
            double media = CalculadoraMedia.calcularMedia(aluno.getNotas());
            System.out.println("Aluno " + aluno.getNome() + ": " + media);
        }

        scanner.close();
    }
}
