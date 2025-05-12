package Atividades;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

class Pedido {
    private List<Item> itens;
    private String id;

    public Pedido(String id) {
        this.id = id;
        this.itens = new ArrayList<>();
    }

    public void adicionarItem(String nome, int quantidade, double precoUnitario) {
        if (quantidade > 0 && precoUnitario > 0) {
            Item item = new Item(nome, quantidade, precoUnitario);
            itens.add(item);
        }
    }

    public double calcularTotal() {
        double total = 0;
        for (Item item : itens) {
            total += item.calcularSubtotal();
        }
        return total;
    }

    public void exibirResumo() {
        System.out.println("Pedido ID: " + id);
        for (Item item : itens) {
            System.out.println("- " + item.getNome() + " | Qtd: " + item.getQuantidade() +
                    " | Unitário: R$" + item.getPrecoUnitario() +
                    " | Subtotal: R$" + item.calcularSubtotal());
        }
        System.out.println("Total do pedido: R$" + calcularTotal());
    }

    // Classe interna para garantir que só o Pedido tenha acesso direto
    private class Item {
        private String nome;
        private int quantidade;
        private double precoUnitario;

        public Item(String nome, int quantidade, double precoUnitario) {
            this.nome = nome;
            this.quantidade = quantidade;
            this.precoUnitario = precoUnitario;
        }

        public double calcularSubtotal() {
            return quantidade * precoUnitario;
        }

        public String getNome() {
            return nome;
        }

        public int getQuantidade() {
            return quantidade;
        }

        public double getPrecoUnitario() {
            return precoUnitario;
        }
    }
}

public class SistemaPedidos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Pedido pedido1 = new Pedido("A001");

        pedido1.adicionarItem("Notebook", 1, 3500.00);
        pedido1.adicionarItem("Mouse", 2, 80.00);

        Pedido pedido2 = new Pedido("B002");
        pedido2.adicionarItem("Cadeira Gamer", 1, 1200.00);
        pedido2.adicionarItem("Mesa Escritório", 1, 900.00);
        pedido2.adicionarItem("Luminária", 2, 75.00);

        pedido1.exibirResumo();
        System.out.println();
        pedido2.exibirResumo();
    }
}
