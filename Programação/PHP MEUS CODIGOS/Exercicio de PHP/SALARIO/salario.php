<?php

$salario = $_REQUEST["salario"];
$vendas = $_REQUEST["vendas"];
$comissao = $vendas * 0.04;

echo "O salario desse mês será: R$" . ($salario + $comissao) . "<br> Pois a comissão foi de: R$" . ($comissao);
