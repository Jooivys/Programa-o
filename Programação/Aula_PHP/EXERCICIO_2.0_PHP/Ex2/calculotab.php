<?php
$numero = $_REQUEST["numero"];
function calcularTabuadaDo10($numero)
{
    echo "Tabuada do 10 para o número $numero:\n";
    for ($i = 1; $i <= 10; $i++) {
        $resultado = $numero * $i;
        echo "$numero x $i = $resultado\n";
    }
}

calcularTabuadaDo10(numero: $numero);