
<?php //caso o codigo nao tenha outra linhguagem nao pecisa fechar 
$a = 1;
$b = &$a; // '&' inverte o valor da variavel, se sem o b=a,com & o a=b
$b = "10"; // Variavel sempre tem $
echo "$a\n"; // \n quebra de linha igual a linguagem C
echo  "$b\n"; //sempre imprime o ultimo valor que a variavel recebeu

$veiculo = 'carro';
$$veiculo = 'Chevette'; //quando coloca "$$" a segunda variavel sera oq estava dentro da primeira variavel,logo,a segunda variavel veiculo vira variavel carro
echo "$carro\n";

$c = '2 carros' + '10 onibus';
echo "$c\n"; //vai fazer o calculo e mandara um aviso falando que alo esta errado(str),porem so fez porque as rfrases começam com num.

$a = 1;
$b = &$a; // "&" inverte o valor da variavel, se sem o "&" b=a,com "&" o a=b
$b = "10";
if (($a == 1) && ($b == 10)) {
    echo "A=1 e B=10\n";
} else {
    echo "A=1 ou B=10\n";
}

$nota1 = readline("Digite a primeira nota: "); //readline é igual o input do PYTHON
$nota2 = readline("Digite a segunda nota: ");
$nota3 = readline("Digite a terceira nota: ");
$nota4 = readline("Digite a quarta nota: ");
$media = ($nota1 + $nota2 + $nota3 + $nota4) / 4;

if ($media >= 7) {
    echo "Sua media é: " .round($media). " VOCÊ PASSOU\n"; //use round para arrendodar o valor
} 
else if ($media >= 4) {
    echo "Sua media é: " .round($media). " VOCÊ ESTÁ NA FINAL\n"; // o , se torna . // e . se torna ,
} 
else {
    echo "Sua nota é: " .round($media). " VOCÊ ESTÁ REPROVADO\n"; // 1,000 é mil// e 1.0 é numero decimal
}

$d=readline("Digite uma das opções: 1 Para reclamar | 2 para elogiar: ");
switch ($d) {
    case 1:
        echo ("Voce escolheu a opçao reclamar!\n");
        $valor=readline("Digite sua reclamaçao: \n");
        break;
    case 2:
        echo("Voce escolheu a opçao elogiar!\n");
        $valor=readline("Digite seu elogio *-*: \n");
        break;
    default:
        echo("Voce nao escolheu nada,adios\n");
        break;
}

