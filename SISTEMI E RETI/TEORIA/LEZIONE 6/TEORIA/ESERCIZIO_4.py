"""#slicing
stringa = "Classe quarta A robotica"
print(f"Il primo carattere della stringa e' {stringa[0]}")
print(f"L'ultimo carattere della stringa e' {stringa[-1]}")

#prende i caratteri a partire da quello con indice 0
#fino a quello con indice 6 ESCLUSO
print(stringa[0:6]) 

#qui prende i caratteri dal 6 fino alla fine
print(stringa[6:])

#qui prende i caratteri dall'inizio fino al -2
print(stringa[:-2])

#questo si chiama gap, prende i caratteri dal 2 al 13 
#ne prende uno e ne salta 2
print(stringa[2:14:2])

#prende tutta la stringa al contrario (-1)
print(stringa[::-1])

#qui prende di nuovo tutta la stringa però a salti di 2
#cioè ne prende 1 e ne salta 2
print(stringa[::-2])
"""

"""stringa = "Classe quarta A robotica"
stringa[15] = "B"
#SOPRA INFATTI è SBAGLIATO
#Le stringhe in python sono IMMUTABILI
"""

stringa = "Classe quarta A robotica"

#per modificare una stringa bisogna usare una seconda stringa
#prenderne i pezzi interessati e sostituire le parti da cambiare
stringa_nuova = stringa[0:14] + "B" + stringa[15:]
print(stringa_nuova)
print(f"LA STRINGA MODIFICATA E': {stringa_nuova}")

#la print permette di stampare tutto, anche se stessa
print(print)