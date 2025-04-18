import entrada from 'readline-sync'; // use o node no terminal para rodar o codigo

let nome = entrada.question("Qual o seu nome? "); // .question() serve para guardar o que o usuario digitar
let nota1 = entrada.question("Qual a primeira nota? ");
let nota2 = entrada.question("Qual a segunda nota? ");

let media = (( Number(nota1) + Number(nota2) )/ 2); // Number é obrigatorio para converter a string em um numero

console.log("Ola, " + nome + " sua media foi: " + media);