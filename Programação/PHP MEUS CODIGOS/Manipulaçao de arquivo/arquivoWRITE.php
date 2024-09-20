<?php

$arquivo = fopen("arquivo.txt", "w"); //ele cria um arquivo ou sobrepoe um arquivo ja criado

fwrite($arquivo, "Primeira Linha \n"); //o conteudo que vai aparecer no WRITE.txt sera esse
fclose($arquivo); 

echo "Arquivo salvo com sucesso";
