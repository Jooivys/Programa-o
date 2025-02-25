<?php
function verificarNome($nome): void
{
    $nomes = ["José", "Cleiton", "Luana", "Rayssa", "Pedro"]; //lista de nomes

    if (in_array(needle: $nome, haystack: $nomes)) { 
        echo "O nome $nome foi encontrado na lista.";
    } else {
        echo "O nome $nome não consta na lista.";
    }
}
if ($_SERVER["REQUEST_METHOD"] == "POST") { //verifica se o formulario foi enviado no metodo POST
    $nome = $_REQUEST["nome"]; //Puxa o nome do formulario
    verificarNome(nome: $nome); //Chama a funçao pra verificar o nome do forms do html
}
