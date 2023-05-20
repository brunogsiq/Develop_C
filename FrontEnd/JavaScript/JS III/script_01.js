// Imprimindo uma mensagem
//Esta mensagem poderá ser visualizada na aba console quando inspecionar a página HTML (F12)
console.log("Bem vindo e Sucesso na sua carreira e aprendizado");

console.log("01 - Variáveis");
let age = 36;
console.log(age);

console.log("02 - Constantes");
const valorIngressoAdulto = 30;
console.log(valorIngressoAdulto);

console.log("03 - Tipos Primitivos");
let name_One = "Bruno";
console.log(name_One);
let age_Two = 1910;
console.log(age_Two);
let estaAprovado = true;
console.log(estaAprovado);
let sobreNome = undefined;
console.log(sobreNome);
let corSelecionado = null;
console.log(corSelecionado);

console.log("04 - Tipagem Dinâmica");
let number = 777;
console.log(number);

console.log("05 - Objetos");
let pessoa = {
  name: "Bruno",
  surName: "Siqueira",
  age: 36,
  profissao: "Quality Assurance",
  timeCoracao: "Corinthians",
};
//Imprimindo Objeto
console.log(pessoa);
//Imprimindo propriedade de um Objeto
console.log(pessoa.timeCoracao);

console.log("06 - Arrays");
let Bruno = ["Siqueira", 36, "Quality Assurance", "Corinthians", 1910];
//Imprimindo Array
console.log(Bruno);
//Imprimindo proprieda de um Array
console.log(Bruno[4]);
//Verificando tamanho de um Array
console.log(Bruno.length);

console.log("07 - Funções");
let corSite = "preto";
function resetColor() {
  corSite = "";
}
//Imprimindo valor da variável
console.log(corSite);
//Chamada da função
resetColor();
//Imprimindo valor da váriavel com novo valor
console.log(corSite);

//Adicionando parâmetros a função
let corSite02 = "branco";
function resetColor02(cor, tonalidade) {
  corSite02 = cor + " " + tonalidade;
}
console.log(corSite02);
//Chamada da função
resetColor02();
//Imprimindo valor da váriavel com novo valor
console.log(corSite02);
resetColor02("Roxo", "Escuro");
//Imprimindo valor da váriavel com novo valor
console.log(corSite02);

function multiplicarValores(valor) {
  return valor * 2;
}
//Impressão da função utilizando uma propriedade
console.log(multiplicarValores(5));
let resultado = multiplicarValores(5);
console.log(resultado * 10);

console.log("08 - Operadores Lógicos");
let salario = 1910;
//***Operadores Matemáticos

//+,-,*,/,**,++,--
console.log(salario + salario);
console.log(salario - salario);
console.log(salario * salario);
console.log(salario / salario);
console.log(salario ** salario);
//Incremenando
console.log(salario++);
console.log(salario);
//Decrementando
console.log(salario--);
console.log(salario);

//***Operadores de Atribuições
let valorTeclado = 777;
console.log(valorTeclado)
//Para fazer uma soma de valores entre variaveis
valorTeclado += valorTeclado;
console.log(valorTeclado)

//***Operadores de Igualdade

//Comparando valores, resposta true
console.log(1 == 1)
//Comparando valores, resposta false
console.log(1 == 2)
//Comparando valores e tipo
console.log(1 === 1)      // true
console.log('1' === 1)    // false

//***Operadores Ternário
//A função deste é minimiza o uso de if e else no código, podendo ser tudo definido em um única linha
let pontos = 99
let tipo = pontos >= 100 ? 'premium' : 'comum';
console.log(tipo);

//Operadores lógicos, utilizado para condições múltiplas
//AND - e - && - retorna true, se ambos verdadeiro

let idadeP1 = 36;
let carteiraTrabalhoP1 = 'OK';
let aplicarVagar = idadeP1 >= 18 && carteiraTrabalhoP1 == 'OK';
console.log(aplicarVagar);

//OR - ou - || - retorna true, se ao menos um é verdadeiro
let idadeP2 = 36;
let carteiraTrabalhoP2 = 'OK';
aplicarVagar = idadeP2 >= 18 || carteiraTrabalhoP2 == '';
console.log(aplicarVagar);

//NOT - não - ! - retorna true, se ao menos um é verdadeiro
let idadeP3 = false;
let carteiraTrabalhoP3 = false;
aplicarVagar = idadeP3 >= 18 || carteiraTrabalhoP3 == 'true';
let candidatoRecusado = !aplicarVagar;
console.log(candidatoRecusado);

//Comparaçoes com valores não booleanos

/*
Conceito de Falsy, que serão as variáveis: Undefined, Null, 0, false, '', NaN (not a number )

Conceito de Truthy, é baseado em tudo que é o inverso do que será considerado em Falsy, assim, caso
seja comparado algo, seja string, number, com algo que não se encaixe em Falsy, retornará o valor
*/
let corPersonalizada = 'red';
let corPadrao = 'blue';
let corPerfil = corPersonalizada || corPadrao
console.log(corPerfil);
let corPersonalizada02 = '';
let corPadrao02 = 'blue';
let corPerfil02 = corPersonalizada02 || corPadrao02
console.log(corPerfil02);

console.log("09 - Invertendo variáveis");
let a = 'black';
let b = 'white';
let c = a;
a = b;
b = c;
console.log(a + ' ' + b);


console.log("10 - IF ELSE");
let msg1 = 'Bom dia!';
let msg2 = 'Boa tarde!';
let msg3 = 'Boa noite!';
let hourM = '10';
let hourT = '16';
let hourN = '23';

if (hourM >= 6 && hourM <= 12) {
  console.log(msg1);
}
else if (hourM >= 12.1 && hourM <= 18) {
  console.log(msg2);
}
else {
  console.log(msg3);
}

if (hourT >= 6 && hourT <= 12) {
  console.log(msg1);
}
else if (hourT >= 12.1 && hourT <= 18) {
  console.log(msg2);
}
else {
  console.log(msg3);
}
if (hourN >= 6.00 && hourN <= 11.59) {
  console.log(msg1);
}
else if (hourN >= 12.00 && hourN <= 17.59) {
  console.log(msg2);
}
else {
  console.log(msg3);
}

console.log("11 - Switch... Case")

let permissao = 'diretor'
switch (permissao) {
  case 'comum':
    console.log('Usuario comum')
    break;
  case 'gerente':
    console.log('Usuario Gerente')
    break;
  case 'diretor':
    console.log('Usuario Diretor')
    break;
  // Caso não seja nenhum case acimma
  default:
    console.log('Usuario não reconhecido')
}

console.log("12 - For")
//Inicia,  Condição, incrementa++ 
for (let i = 0; i < 5; i++) {
  console.log('Vai Corinthians')
  console.log('Ou')
  console.log('Vai Corinthians', i)
}

for (let i = 1; i <= 5; i++) {
  if (i % 2 !== 0) {
    console.log(i);
  }
}

for (let i = 5; i >= 1; i--) {
  if (i % 2 !== 0) {
    console.log(i)
  };
};

console.log("13 - While")
let i = 5;

while (i >= 1) {
  if (i % 2 !== 0) {
    console.log(i);
  }
  i--;
}

console.log("14 - Do While")
do {
  console.log('Digitando...', i);
  i++;
} while (i < 10)

console.log("15 - For in")

const pessoaColab = {
  nome: 'Bruno',
  idade: 36
};

for (let chave in pessoaColab) {
  console.log(chave)
  console.log(chave, pessoa.nome)
  console.log(chave, pessoa['idade'])
}

const cores = ['azul', 'branco', 'preto'];

for (let indice in cores) {
  console.log(indice)
  console.log(indice, cores[indice])
}

console.log("16 - For of")

for (let cor of cores) {
  console.log(cor);
}

console.log("17 - Exercício")

/*
//01  
let numA = 1910;
let numB = 777;

function retornaMaior(numA, numB){
  if(numA > numB){
    return numA,
    numMaior = numA
  }
  else{
    return numB,
    numMaior = numB
  }
}console.log(numMaior)*/

//02
let valorMaior = max(5, 9);
function max(numC, numD) {
  if (numC > numD)
    return numC;
  else return numD;
}
console.log(valorMaior);

//03
let valorMaiorDois = max(1500, 9);
function max(numE, numF) {
  if (numE > numF)
    return numE;
  return numF;
}
console.log(valorMaiorDois);

//04
let valorMaiorTres = max(777, 0);
function max(numG, numH) {
  return numG > numH ? numG : numH;
} console.log(valorMaiorTres);


console.log("18 - FizzBuzz")

/*
se div por 3 = fizz
se div por 5 = buzz
se div por 15 = fizzbuzz
se não div por 3 ou 5 = entrada
se NaN = NaN
*/
const resultado02 = fizzBuzz(30);
console.log(resultado02);

function fizzBuzz(entrada) {
  if ((entrada % 3 === 0) || (entrada % 5 === 0))
    return 'FizzBuzz';
  if (typeof entrada !== 'number')
    return 'Não é um número';
  if (entrada % 3 === 0)
    return 'Fizz';
  if (entrada % 5 === 0)
    return 'Buzz';
  return 'entrada';
}

verificarVelocidade(95)

function verificarVelocidade(velocidade) {
  const valorVelocidadeMaxima = 70;
  const kmPonto = 5;
  if (velocidade <= valorVelocidadeMaxima)
    console.log('Sem Problema');
  else {
    const pontos = Math.floor((velocidade - valorVelocidadeMaxima) / kmPonto);
    if (pontos >= 12)
      console.log('Carteira SUSPENA');
    else {
      console.log('Pontos =', pontos)
    }
  }
}

exibirTipo(10);
function exibirTipo (limite) {
  for (i = 0; i <= limite; i++) {
    if (i % 2 === 0)
      console.log(i, 'PAR');
    else 
      console.log(i, 'IMPAR');
  }
}

console.log("19 - Lendo Propriedades dentro de um objeto")

console.log("Laço While")

for (let i = 5; i >= 1; i++){
  if(i % 2 !== 0){
    console.log(i);
  }
}

let i = 5;

while (i >= 1) {
  if(i % 2 !== 0){
    console.log(i);
  }
  i--;
}
