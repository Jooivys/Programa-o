<?php

include_once("funcao.php"); //Utilize o once para que o arquivo seja carregado apenas uma vez, caso não deseja isso,nao utilize-o
$num1 = 5;
$num2 = 5;
echo "A soma dos números $num1 e $num2 é " . soma($num1, $num2);
echo "<br>";
echo "A subtração dos números $num1 e $num2 é " . subtracao($num1, $num2);
echo "<br>";
echo "A multiplicação dos números $num1 e $num2 é " . multiplicacao($num1, $num2);
echo "<br>";
echo "A divisão dos números $num1 e $num2 é " . divisao($num1, $num2);
echo "<br>";
