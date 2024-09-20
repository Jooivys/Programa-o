#Classes
print(type(9.0))
print(type(8))
print(type('Pão'))
print(type(1==4))
print(type(8==9))
print(type(5==5))
CONSTANT=20 #Essa é uma variavel que nao muda, constante literalemente ./
print(CONSTANT)
#Conversão de tipos de classe
print(type('2.9'))
print(type(int(6.90)))
#Funçao input
input('Qual seu crime?')
#Calculadora
numero1= input('Digite um numero:')
numero2= input('Digite um numero:')
inteiro_numero1= int(numero1)
inteiro_numero2= int(numero2)
print(f'A soma é:{inteiro_numero1 + inteiro_numero2}')
#Operatorios condicionais
entrada= input('Voce deseja entrar ou sair do sistema?')
if entrada == 'entrar':
    print('Bem vindo')
    print('Voce entrou no sistema')
elif entrada == 'sair':
    print('Quer sair mesmo?,entra dnv po ')
    print('Voce saiu')
else:
    print('Entrada invalida')
#fluxo do interpretador
condiçao1 = False
condiçao2= True
if condiçao1:
    print('Codigo da condiçao1')
elif condiçao2:
    print('Codigo da condiçao2')
else: 
    print('Codigo do else')
    print('Fora das condicionais') 
#Calculadora com condiçao
a= input('Digite um numero:')
b= input('Digite um numero:')
c= input('Digite um numero')
inteiro1= int(a)
inteiro2= int(b)
inteiro3= int(c)
soma = inteiro1+inteiro2+inteiro3
print(f'A soma é:{soma}')
if soma == 100:
    print('Igual a 100')
elif soma >100:
    print('Maior que 100')
else:
    print('Menor que 100')

#Qual e maior e menor numero
x1= input('Primeiro valor= ')
x2= input('Segundo valor= ') 
if x1>x2 :
    print('Primeiro valor é maior que o segundo')
elif x2>x1:
    print('Segundo valor é maior que o segundo')
else:
    print('Os dois sao iguais')
#Operadores Logicos 
#Operador AND
entrada= input('E-Entrar ou S-Sair:')
senha_digitada=input('Digite sua senha')
senha_permitida= '1234'
if entrada == 'E'and senha_digitada== senha_permitida:
 print('Entrou no sistema')
elif entrada== 'S':
 print('Voce saiu dos sistema')
else:      
 print('Entrada invalida')
#Operador OR
entrada= input('E-Entrar ou S-Sair:')
senha_digitada=input('Digite sua senha')
senha_permitida= '1234'
if entrada == 'E' or 'e' and senha_digitada== senha_permitida:
 print('Entrou no sistema')
elif entrada== 'S':
 print('Voce saiu dos sistema')
else:      
 print('Entrada invalida')  
#Operador NOT
senha_permitida='pao'
senha=('Digite a senha secreta')
if senha ==senha_permitida:
   print('Voce acertou a senha')
elif not senha:
   print('Esqueceu a senha foi?, kkkkkkk')   
#Operador IN e NOT IN
#ex 2
frutas=['maça','banana','uva','pera']
if 'maça'in frutas:
  print('Maça esta em frutas')
else:
   print('Maça não estaem frutas') 
#ex 2
nome=input('Digite seu nome: ')
print(' ' in nome)
print('b'in nome)
#FOR
#ex1
for i in range(6): #o final é o numero +1 que o a gente quer
      print(i)
#ex2
for i in range(1,11):
 numero= int(input(f'Digite o {i}º'))
 print(f'O triplo do numero é {numero*3}')
 if numero >=0:
  print('Positivo')
 else:
  print('Negativo')
#ex3
for i in range(1,11):
 numero= int(input(f'Digite o {i}º'))
 print(f'O triplo do numero é {numero*3}')
 if numero >=0:
  print('Positivo')
 else:
  print('Negativo')
#Listas e Matrizes
idade=input(int("Digite sua idade"))
print(idade)
#ex1
idade=[int(input("Digite a primeira idade: ")), #variavel 0
       int(input("Digite a segunda idade: ")),#variavel 1
       int(input("Digite a terceira idade: "))]#varivel 2
print(idade)
print(idade[1])#O 1 entre cochetes significa que ira aparecer a segunda variael apenas
#Criaçao de lista
idades=[]
maior=0
for x in range(6):
    idade=int(input('Digite sua idade: '))
    idades.append(idade) #.append adiciona um dado no final da lista
for idade in idades:
    if idade >= maior:
     maior=idade    
print(maior)
#Funçoes
def soma(x,y):
   return x+y
num1=int(input('Digite um numero: '))
num2=int(input('Digite um numero: '))
resultado= soma(num1,num2)
print(resultado)  

def divisao(x,y):
   return x//y #dois // dar o resultado em int, e / dar em flot
num1=int(input('Digite um numero: '))
num2=int(input('Digite um numero: '))
resultado= divisao(num1,num2)
print(resultado)
 
def aoQuadrado(x):
    return x*x
num1=int(input('Digiteseu numero: '))
resultado= aoQuadrado(num1)
print(resultado) 

def aoQuadrado(x,y):
    return (x*x)+(y*y)
num1=int(input('Digite seu numero: '))
num2=int(input('Digite seu numero: '))
Perimetro_do_retãngulo= aoQuadrado(num1,num2)
print(Perimetro_do_retãngulo)

def classificar_atleta(idade):
    if 5 <= idade and idade <=10:
        categoria = 'Infantil'
    elif 11 <= idade and idade <= 15:
        categoria = 'Juvenil'
    elif 16 <= idade and idade <= 20:
        categoria = 'Júnior'
    elif 21 <= idade and idade <= 25:
        categoria = 'Profissional'
    else:
        categoria ='Não tem categoria'
    return categoria
idade_atleta = int(input("Digite a idade do atleta: "))
categoria_atleta = classificar_atleta(idade_atleta)
print(f'A categoria do atleta é: {categoria_atleta}')

def classificar_preços(preços):
    abaixo_50 = 0
    entre_50_e_80 = 0
    acima_80 = 0
    soma_preços = 0
    for preço in preços:
        if preço < 50:
            abaixo_50 += 1
        elif 50 <= preço <= 80:
            entre_50_e_80 += 1
        else:
            acima_80 += 1
        soma_preços += preço
    media_preços = soma_preços / len(preços)
    return abaixo_50, entre_50_e_80, acima_80, media_preços
preços = []
for i in range(5):
    preço = float(input(f"Digite o preço do {i+1}° produto: "))
    preços.append(preço)
abaixo_50, entre_50_e_80, acima_80, media_preços = classificar_preços(preços)
print(f"Quantidade de produtos com preço inferior a R$ 50,00: {abaixo_50}")
print(f"Quantidade de produtos com preço entre R$ 50,00 e R$ 80,00: {entre_50_e_80}")
print(f"Quantidade de produtos com preço acima de R$ 80,00: {acima_80}")
print(f"Média de preço dos produtos: R$ {media_preços:.2f}")

import math
def volume_esfera(raio):
    volume=4/3*math.pi*(raio*raio*raio)
    return volume
raio=float(input('Digite o raio da esfera: '))
volume=volume_esfera(raio)
print(f'O volume da esfera com raio {raio:} é: {volume:.2f}')
#Classes,Hereditariedade e polimorfismo
class Carro: #classe mattriz
    def __init__(self, modelo,marca,cor) -> None: #'__init__' definiçoes da superclasse ou classe matriz
        self.modelo =modelo
        self.marca=marca
        self.cor=cor

    def acelerar (self): #def
        print(f"{self.modelo} atingiu um poste")

    def freiar (self):
        print(f"{self.modelo} freiou demais, e bateu em alguem")

class Caminhao(Carro): #classe que herdou a classe matriz
    def buzinar(self):
        print(f"{self.modelo} buzinou para nao bater no gato")






