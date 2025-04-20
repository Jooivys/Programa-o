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






