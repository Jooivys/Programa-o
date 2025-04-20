V = True 
F = False

#OPERADOR NEGACAO, NOT
def negacao(p):
    return not p
print("OPERADOR NEGACAO")
print(negacao(F)) #True
print(negacao(V)) #False

#OPERADOR CONJUNÇAO, AND
def conjuncao(p,q):
    return p and q
print("OPERADOR CONJUNCAO")
print(conjuncao(F,F)) #False
print(conjuncao(F,V)) #False
print(conjuncao(V,F)) #False
print(conjuncao(V,V)) #True

#OPERADOR DISJUNCAO, OR
def disjuncao(p,q):
    return p or q
print("OPERADOR DISJUNCAO")
print(disjuncao(F,F)) #False
print(disjuncao(F,V)) #True
print(disjuncao(V,F)) #True
print(disjuncao(V,V)) #True

#OPERADOR CONDICIONAL, IF
def condicional(p,q):
    return p if q else not p
print("OPERADOR CONDICIONAL")
print(condicional(F,F)) #False
print(condicional(F,V)) #True
print(condicional(V,F)) #False
print(condicional(V,V)) #True

#OPERADOR EXCLUSIVO, XOR
def exclusivo(p,q):
    return p != q
print("OPERADOR EXCLUSIVO")
print(exclusivo(F,F)) #False
print(exclusivo(F,V)) #True
print(exclusivo(V,F)) #True
print(exclusivo(V,V)) #False    

# OPERADOR IN, NOT IN
print("OPERADOR IN, NOT IN")
frutas=['maça','banana','uva','pera']
print('maça'in frutas)
print('goiaba'not in frutas)