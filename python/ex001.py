n = 1
l = []

while n != 0:

    l.append(int(input("Digite um número: ")))
    n = l[-1]

print("\n\nVocê digitou 0 e encerrou o programa!")
print("\nOs números que você digitou foram:\n")

for elemento in l:
    print(elemento)

if len(l) % 2 == 0:
    print("\nVocê digitou uma quantidade PAR de números!")
else:
    print("\nVocê digitou uma quantidade ÍMPAR de números!")