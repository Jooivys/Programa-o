package Atividades;
import java.util.ArrayList;
import java.util.List;


class Autor {
    private String nome;
    private String nacionalidade;

    public Autor(String nome, String nacionalidade) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
    }

    // visível apenas dentro do mesmo arquivo
    String getDescricao() {
        return nome + " (" + nacionalidade + ")";
    }
}

class Livro {
    private String titulo;
    private List<Autor> autores;

    public Livro(String titulo) {
        this.titulo = titulo;
        this.autores = new ArrayList<>();
    }

    public void adicionarAutor(Autor autor) {
        if (autor != null) {
            autores.add(autor);
        }
    }

    public void listarAutores() {
        System.out.println("Autores do livro \"" + titulo + "\":");
        for (Autor autor : autores) {
            System.out.println("- " + autor.getDescricao());
        }
    }
}

public class BibliotecaTest {
    public static void main(String[] args) {
        Autor autor1 = new Autor("Machado de Assis", "Brasileiro");
        Autor autor2 = new Autor("José de Alencar", "Brasileiro");
        Autor autor3 = new Autor("Clarice Lispector", "Brasileira");

        Livro livro1 = new Livro("Dom Casmurro");
        livro1.adicionarAutor(autor1);

        Livro livro2 = new Livro("Literatura Brasileira - Coletânea");
        livro2.adicionarAutor(autor1);
        livro2.adicionarAutor(autor2);
        livro2.adicionarAutor(autor3);

        livro1.listarAutores();
        System.out.println();
        livro2.listarAutores();
    }
}
