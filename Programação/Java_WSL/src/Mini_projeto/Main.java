package Mini_projeto;
import java.util.ArrayList;
import java.util.Scanner;

class Livro{
    private String titulo;
    private String autor;
    private int ano;

    public Livro(String titulo,String autor,int ano){
        this.titulo = titulo;
        this.autor = autor;
        this.ano = ano;
    }

    //Set
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    public void setAutor(String autor) {
        this.autor = autor;
    }
    public void setAno(int ano) {
        this.ano = ano;
    }

    //Get
    public String getTitulo() {
        return titulo;
    }
    public String getAutor() {
        return autor;
    }
    public int getAno() {
        return ano;
    }

    public void exibirDetalhes(){
        System.out.println("Título: "+titulo);
        System.out.println("Autor: "+autor);
        System.out.println("Ano: "+ano);
    }
}



class Biblioteca {
    private ArrayList<Livro> livros;

    public Biblioteca() {
            livros = new ArrayList<>();
    }

    public void adicionarLivro(Livro livro) {
            livros.add(livro);
    }

    public void listarLivros() {
            if (livros.isEmpty()) {
                System.out.println("Nenhum livro cadastrado.");
                return;
            }

            for (Livro l : livros) {
                l.exibirDetalhes();
            }
        }
    }

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

                Biblioteca biblioteca = new Biblioteca();

                while (true) {
                    System.out.println("1 - Adicionar livro");
                    System.out.println("2 - Listar livros");
                    System.out.println("3 - Sair");
                    System.out.print("Escolha: ");
                    int opcao = sc.nextInt();
                    sc.nextLine(); // consumir quebra de linha

                    if (opcao == 1) {
                        System.out.print("Título: ");
                        String titulo = sc.nextLine();
                        System.out.print("Autor: ");
                        String autor = sc.nextLine();
                        System.out.print("Ano: ");
                        int ano = sc.nextInt();
                        sc.nextLine(); // consumir quebra de linha

                        Livro livro = new Livro(titulo, autor, ano);
                        biblioteca.adicionarLivro(livro);

                    } else if (opcao == 2) {
                        biblioteca.listarLivros();

                    } else if (opcao == 3) {
                        System.out.println("Encerrando.");
                        break;

                    } else {
                        System.out.println("Opção inválida.");
                    }
                }
                sc.close();
    }
}
