<?php

$nome = $_REQUEST["nome"];
$disciplina = $_REQUEST["disciplina"];
$nota1 = $_REQUEST["nota1"];
$nota2 = $_REQUEST["nota2"];
$nota3 = $_REQUEST["nota3"];

function calculoMedia($a, $b, $c): float|int
{
    $media = ($a + $b + $c) / 3;
    return $media;
}
echo "O $nome da disciplina $disciplina teve média " . calculoMedia(a: $nota1, b: $nota2, c: $nota3);
