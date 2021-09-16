produtos = []

def novo():

    print("\n------------------------------------")
    nome = input("ENTER --> Menu Inicial\n\nNome do produto: ")

    while(nome != ""):
        local = input("Estabelecimento: ")
        preco = float(input("Preço: "))

        produto = {}
        produto['nome'] = nome
        produto['local'] = local
        produto['preco'] = preco
        produtos.append(produto)

        print("\n------------------------------------")
        nome = input("ENTER --> Menu Inicial\n\nNome do produto: ")

    return print("\n------------------------------------\n")

def consultar():

    print("\n------------------------------------\n")
    print("ENTER --> Menu Inicial\n\nEsses são os produtos cadastrados:\n")

    for produto in produtos:
        print(produto['nome'])

    aux = input("Informe o nome do produto: ")

    while aux != "":
        print("\n------------------------------------\n")

        maior = 0
        menor = 999999
        div = 0
        soma = 0

        for produto in produtos:
            if produto['nome'] == aux:
                if produto['preco'] < menor:
                    menor = produto['preco']
                    local_menor = produto['local']

                if produto['preco'] >= maior:
                    maior = produto['preco']
                    local_maior = produto['local']

                soma += produto['preco']
                div += 1

        print("Preços:\n")
        print(f"Menor: R${menor} --- Local: {local_menor}")
        print(f"Maior: R${maior} --- Local: {local_maior}\n")
        print(f"Médio: R${soma/div:.2f}")

        print("\n------------------------------------\n")
        print("ENTER --> Menu Inicial\n\nEsses são os produtos cadastrados:\n")

        for produto in produtos:
            print(produto['nome'])

        aux = input("Informe o nome do produto: ")

    return print("\n------------------------------------\n")

print("\n\n------- Comparador de Preços -------\n\n")

opcao = 'a'

while(opcao != 'e' and opcao != 'E'):
    print("N --> Novo produto")
    print("C --> Consultar produtos")
    print("E --> Encerrar o programa")
    opcao = input("Informe uma opção: ")

    if(opcao == 'N' or opcao == 'n'):
        novo()
    elif(opcao == 'C' or opcao == 'c'):
        consultar()
    elif(opcao != 'E' and opcao != 'e'):
        print("Opção inválida!")
        print("\n------------------------------------\n")
    else:
        print("\n------------------------------------\n")
        print("Fim do programa!")