fixo = {}
outro = {}
rendimentos = {}

def gastoFixo():
    
    print("\n------------------------------------")
    nome = input("ENTER --> Menu Inicial\n\nNome do gasto: ")

    while(nome != ""):
        valor = float(input("Valor do gasto: R$"))

        fixo[nome] = valor

        if entrada() - (saidaFixo() + saidaOutro()) < 0:
            print('\nSEU SALDO ESTÁ NEGATIVO\nCUIDADO COM O SERASA!!!')

        print("\n------------------------------------")
        nome = input("ENTER --> Menu Inicial\n\nNome do gasto: ")

    return print('\n----------------------------------------\n')

def gastoOutro():

    print("\n------------------------------------")
    nome = input("ENTER --> Menu Inicial\n\nNome do gasto: ")

    while(nome != ""):
        valor = float(input("Valor do gasto: R$"))

        outro[nome] = valor

        if entrada() - (saidaFixo() + saidaOutro()) < 0:
            print('\nSEU SALDO ESTÁ NEGATIVO\nCUIDADO COM O SERASA!!!')

        print("\n------------------------------------")
        nome = input("ENTER --> Menu Inicial\n\nNome do gasto: ")

    return print('\n----------------------------------------\n')

def rendimento():

    print("\n------------------------------------")
    nome = input("ENTER --> Menu Inicial\n\nNome do rendimento: ")

    while(nome != ""):
        valor = float(input("Valor do rendimento: R$"))

        rendimentos[nome] = valor

        print("\n------------------------------------")
        nome = input("ENTER --> Menu Inicial\n\nNome do rendimento: ")

    return print('\n----------------------------------------\n')

def resumo():

    print("\n----------------------------------------\n")

    print(f'Rendimentos: R${entrada():.2f}\n')
    for i in rendimentos:
        print(f'{i}: R${rendimentos[i]:.2f} --> {(rendimentos[i]/entrada())*100:.2f}%')

    print("\n----------------------------------------\n")

    gasto = saidaFixo() + saidaOutro()

    print(f'Gastos: R${gasto:.2f} --> {(gasto/entrada())*100:.2f}%\n\n')

    print(f'Fixos: R${saidaFixo():.2f} --> {(saidaFixo()/gasto)*100:.2f}%\n')
    for j in fixo:
        print(f'{j}: R${fixo[j]:.2f} --> {(fixo[j]/saidaFixo())*100:.2f}%')

    print(f'\n\nOutros: R${saidaOutro():.2f} --> {(saidaOutro()/gasto)*100:.2f}%\n')
    for k in outro:
        print(f'{k}: R${outro[k]:.2f} --> {(outro[k]/saidaOutro())*100:.2f}%')

    print("\n----------------------------------------\n")

    saldo = entrada() - (saidaFixo() + saidaOutro())

    print(f'Saldo: R${saldo:.2f} --> {(saldo/entrada())*100:.2f}%')

    return print('\n----------------------------------------\n')

def entrada():
    a = 0
    for v in rendimentos.values():
        a += v
    return a

def saidaFixo():
    b = 0
    for v in fixo.values():
        b += v
    return b

def saidaOutro():
    c = 0
    for v in outro.values():
        c += v
    return c

print('\n\n------- Gerenciador de gastos mensais -------\n')

aux = 10

while aux != 4:
    print('0 --> Cadastrar rendimentos')
    print('1 --> Cadastrar gastos fixos')
    print('2 --> Cadastrar outros gastos')
    print('3 --> Consultar resumo financeiro')
    print('4 --> Encerrar')
    
    aux = int(input('Informe uma opção: '))
    
    if aux == 1:
        gastoFixo()
    if aux == 2:
        gastoOutro()
    if aux == 0:
        rendimento()
    if aux == 3:
        resumo()
    if aux == 4:
        print('\n----------------------------------------\n')
        print('Fim do programa!')
        print('\n----------------------------------------\n')
    if aux > 4:
        print('\n----------------------------------------\n')
        print('Opção inválida!')
        print('\n----------------------------------------\n')