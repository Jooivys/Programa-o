<?php

$arquivo = fopen("arquivo.txt", "r"); //USE O "@" para que o erro seja omitido para o usuario

if ($arquivo) {
    echo "ABRIU CABEÇA DE TANAJURA <br>";
} else {
    echo "NAO ABRIU CABEÇA DE LAMPADA  <br>"; //nao vai abrir pois nao colocamos nenhum arqivo.txt real
}

while (!feof($arquivo)) { //"!" serve para que o programa leia o aqruivo ate o final
    $linha = fgets($arquivo);
    echo $linha . "<br>";
}

fclose($arquivo);
