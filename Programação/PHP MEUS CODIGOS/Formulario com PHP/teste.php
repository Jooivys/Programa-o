<?php

$nome = $_REQUEST["nome"]; //em vez de usar POST ou GET, use o REQUEST pois ele recebe os dois tipos
$sobrenome = $_REQUEST["sobrenome"];
$idade = $_REQUEST["idade"];
$email = $_REQUEST["email"];

echo "Nome do usuário: $nome<br>";
echo "Sobrenome do usuário: $sobrenome<br>";
echo "Idade do usuário: $idade<br>";
echo "Email do usuário: $email<br";
