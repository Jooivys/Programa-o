<?php

$BaseMaior= $_REQUEST["BaseMaior"];
$BaseMenor= $_REQUEST["BaseMenor"];
$altura= $_REQUEST["altura"];
$AreaDoTrapezio= (($BaseMaior+$BaseMenor)*$altura)/2;

echo "A area do trapezio é: $AreaDoTrapezio";