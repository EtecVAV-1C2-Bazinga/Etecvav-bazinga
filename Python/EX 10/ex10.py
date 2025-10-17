resp = "sim" 

while (resp=="sim" or resp=="s"):

    lista = [] 

    for i in range(5):
        num = int(input(f"Digite o {i + 1}º número: "))
        lista.append(num)



    print(f"\nLista: {lista}")


    c = int(input("Digite um número: "))


    encontrado = False


    for i in range(len(lista)):

        for x in range(i + 1, len(lista)):  
            if lista[i] * lista[x] == c:
                print(f"Resultado: {lista[i]} e {lista[x]}")

                encontrado = True


    if not encontrado:
        print("Resultado: não existem tais números")


    resp = input("\nDeseja continuar? (sim/nao) ")