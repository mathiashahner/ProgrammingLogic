print("\n\n\n-=-=-=-=-=-=-=-=-=- Calculadora para Notas de Turmas -=-=-=-=-=-=-=-=-=-\n\n")

turma = []

nome = input("Por favor, informe o nome do aluno: ")

while nome != "":

    aluno = {}

    a1 = float(input("Informe a primeira nota do GA: "))
    a2 = float(input("A segunda nota do GA: "))
    b1 = float(input("A primeira nota do GB: "))
    b2 = float(input("E a segunda nota do GB: "))

    ga = a1*0.4 + a2*0.6
    gb = b1*0.4 + b2*0.6
    mf = (ga + 2*gb)/3

    aluno['NOME'] = nome
    aluno['A1'] = a1
    aluno['A2'] = a2
    aluno['B1'] = b1
    aluno['B2'] = b2
    aluno['MF'] = mf

    if mf >= 6:
        aluno['STATUS'] = 'Aprovado!'
    else:
        aluno['STATUS'] = 'Reprovado!'
        gc_ga = 18 - (2*gb)
        gc_gb = (18 - ga)/2
            
        if gc_ga <= gc_gb:
            aluno['GC'] = 'Grau A'
        else:
            aluno['GC'] = 'Grau B'

    turma.append(aluno)

    nome = input("\nInforme o nome do próximo aluno ou tecle ENTER para continuar: ")

consulta = 's'

while consulta == 's':
    print("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n")
    print("Informe o número correspondente ao aluno que deseja consultar os dados:\n")

    i = 0
    while i < len(turma):
        print(f"{i} -->", turma[i]['NOME'])
        i += 1

    num = int(input("Número do aluno: "))

    print("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n")

    if len(turma[num]) == 7:
        print(f"Nome: {turma[num]['NOME']}")
        print(f"Média Final: {turma[num]['MF']:.2f}")
        print(f"Situação: {turma[num]['STATUS']}")
    else:
        print(f"Nome: {turma[num]['NOME']}")
        print(f"Média Final: {turma[num]['MF']:.2f}")
        print(f"Situação: {turma[num]['STATUS']}")
        print(f"O {turma[num]['GC']} é o mais indicado para a recuperação.")

    print("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n")

    print("Deseja consultar os dados de outro aluno?")
    consulta = input("[S]im ou [N]ão: ")

print("\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n")
print("                            Fim do programa!")