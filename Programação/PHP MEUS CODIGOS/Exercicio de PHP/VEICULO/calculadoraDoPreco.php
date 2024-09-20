<?php

$custo = $_REQUEST["custo"];

if ($custo < 40000) {
    echo "O valor final do veiculo sera: " . ($custo) + ($custo * 0.05);
} else if ($custo < 70000) {
    echo "O valor final do veiculo sera: " . ($custo) + ($custo * 0.10) + ($custo * 0.15);
} else {
    echo "O valor final sera: " . ($custo) + ($custo * 0.15) + ($custo * 0.20);
}
