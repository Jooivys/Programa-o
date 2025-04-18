// WHILE
let numeroWhile = 3;
let numeroFor = 5;
let i = 0;


console.log("Por WHILE");
console.log("Tabuada de multiplicação - Nº " + numeroWhile);

while (i <= 10) { // So executa se a condiçao for verdadeira

    let resultado = numeroWhile * i;

    console.log(numeroWhile + " x " + i + " = " + resultado);

    i++;
}

// FOR
console.log("Por FOR");
for (i = 0; i <= 10; i++) { // Executa enquanto a condiçao for verdadeira

    let resultado = numeroFor * i;

    console.log(numeroFor + " x " + i + " = " + resultado);
}

// DO-WHILE
do { // Executa, e depois verifica que a condiçao é verdadeira
i++;
console.log(i); // Vai imprimir o 16 antes de verificar a condiçao menos 15
} while (i <= 15); 

//FOR IN
console.log("Por FOR IN");
let pessoas = ["Ivys", "Maria", "Joaquim"];
for ( i in pessoas) {
    console.log(pessoas[i]);
}

//FOR OF
console.log("Por FOR OF");
for ( pessoa of pessoas) {
    console.log("Pessoa: " +pessoa);
}