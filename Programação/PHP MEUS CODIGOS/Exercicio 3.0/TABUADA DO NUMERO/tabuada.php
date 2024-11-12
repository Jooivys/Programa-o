<?php
function calcularTabuada($numero) {
    $tabuada = "";
    for ($i = 1; $i <= 10; $i++) {
        $resultado = $i * $numero;
        $tabuada .= "$i x $numero = $resultado\n";
    }
    return $tabuada;
}

//Criar tabuada.txt
function salvarTabuada($numero) {
    $tabuada = calcularTabuada($numero);
    $arquivo = "tabuada.txt";
    // Salva a tabuada no tabuada.txt
    file_put_contents($arquivo, $tabuada);
}

//Verifica se o formulário foi enviado
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Recebe o número enviado pelo formulário
    $numero = intval($_POST['numero']);
    salvarTabuada($numero);
    
    //Lê a tabuada.txt para exibir o conteúdo
    $arquivo = 'tabuada.txt';
    if (file_exists($arquivo)) {
        echo "<h2>Tabuada do $numero</h2>";
        echo "<pre>" . file_get_contents($arquivo) . "</pre>";
    } else {
        echo "Ocorreu um erro surpresa";
    }
}

