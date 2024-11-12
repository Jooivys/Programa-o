V = True 
F = False
#OPERADOR NEGACAO, NOT
def negacao(p):
    return not p
print(negacao(F)) #True
print(negacao(V)) #False
#OPERADOR CONJUNÇAO, E
def conjuncao(p,q):
    return p and q
print(conjuncao(F,F)) #False
print(conjuncao(F,V)) #False
print(conjuncao(V,F)) #False
print(conjuncao(V,V)) #True
#OPERADOR DISJUNCAO, OU
def disjuncao(p,q):
    return p or q
print(disjuncao(F,F)) #False
print(disjuncao(F,V)) #True
print(disjuncao(V,F)) #True
print(disjuncao(V,V)) #True
    