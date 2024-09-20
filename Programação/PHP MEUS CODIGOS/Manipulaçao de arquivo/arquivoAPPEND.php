<?php

$arquivo = fopen("arquivo.txt", "a"); //o 'a' adiciona texto no arquivo,nao vai ser sobreescrito

fwrite($arquivo, "Primeira Linha \n"); 
fclose($arquivo); 

echo "Arquivo salvo com sucesso";
