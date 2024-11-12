<?php
$frase1 = $_REQUEST['frase1'];
$frase2 = $_REQUEST['frase2'];
$frase3 = $_REQUEST['frase3'];

$arquivo = fopen("arquivo.txt", "w");

fwrite($arquivo, "$frase1\n");
fwrite($arquivo, "$frase2\n");
fwrite($arquivo, "$frase3\n");
fclose($arquivo);

echo "Arquivo salvo com sucesso <br>";

$arquivo = fopen("arquivo.txt", "r"); //USE O "@" para que o erro seja omitido para o usuario

if ($arquivo) {
    echo "ARQUIVO ABRIU <br>";
} else {
    echo " ARQUIVO NÃO ABRIU <br>"; //nao vai abrir pois nao colocamos nenhum arqivo.txt real
}

while (!feof($arquivo)) { //"!" serve para que o programa leia o aqruivo ate o final
    $linha = fgets($arquivo);
    echo "$linha <br>";
}

fclose($arquivo);
