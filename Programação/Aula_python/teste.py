class Carro: #classe mattriz
    def __init__(self, modelo,marca,cor) -> None: #'__init__' definiçoes da superclasse ou classe matriz
        self.modelo = modelo
        self.marca = marca
        self.cor = cor

    def acelerar (self): #def
        print(f"{self.modelo} atingiu um poste")

    def freiar (self):
        print(f"{self.modelo} freiou demais, e bateu em alguem")

class Caminhao(Carro): #classe que herdou a classe matriz
    def buzinar(self):
        print(f"{self.modelo} buzinou para nao bater no gato")

fusca= Carro('Fusca','VK','azul')
