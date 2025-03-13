class ContaBancaria {
    protected String titular;
    protected double saldo;

    public ContaBancaria(String titular, double saldoInicial) {
        this.titular = titular;
        this.saldo = saldoInicial;
    }

    public void depositar(double valor) {
        saldo += valor;
        System.out.println("Depósito de R$" + valor + " realizado. Novo saldo: R$" + saldo);
    }

    public void sacar(double valor) {
        if (valor > saldo) {
            System.out.println("Saldo insuficiente para saque.");
        } else {
            saldo -= valor;
            System.out.println("Saque de R$" + valor + " realizado. Novo saldo: R$" + saldo);
        }
    }

    public void exibirSaldo() {
        System.out.println("Titular: " + titular + " | Saldo: R$" + saldo);
    }
}

// Subclasse ContaCorrente
class ContaCorrente extends ContaBancaria {
    private final double taxaManutencao;

    public ContaCorrente(String titular, double saldoInicial, double taxaManutencao) {
        super(titular, saldoInicial);
        this.taxaManutencao = taxaManutencao;
    }

    public void cobrarTaxa() {
        saldo -= taxaManutencao;
        System.out.println("Taxa de manutenção de R$" + taxaManutencao + " cobrada. Novo saldo: R$" + saldo);
    }
}

// Subclasse ContaPoupanca
class ContaPoupanca extends ContaBancaria {
    private final double taxaRendimento;

    public ContaPoupanca(String titular, double saldoInicial, double taxaRendimento) {
        super(titular, saldoInicial);
        this.taxaRendimento = taxaRendimento;
    }

    public void renderJuros() {
        double rendimento = saldo * (taxaRendimento / 100);
        saldo += rendimento;
        System.out.println("Rendimento de R$" + rendimento + " aplicado. Novo saldo: R$" + saldo);
    }
}

// Classe principal para testar
public class ContaBanco {
    public static void main(String[] args) {
        ContaCorrente cc = new ContaCorrente("João Silva", 1000, 12.50);
        ContaPoupanca cp = new ContaPoupanca("Maria Souza", 2000, 1.5);

        cc.exibirSaldo();
        cc.depositar(500);
        cc.sacar(300);
        cc.cobrarTaxa();
        cc.exibirSaldo();

        System.out.println();

        cp.exibirSaldo();
        cp.depositar(1000);
        cp.renderJuros();
        cp.sacar(500);
        cp.exibirSaldo();
    }
}
