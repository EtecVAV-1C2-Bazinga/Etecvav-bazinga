resp = "sim"


while(resp == "sim" or resp == "s"):

    vetor = []

    for i in range(8):
        num = int(input(f"\n Digite o {i + 1}º numero: "))
        vetor.append(num)


    positivos = []
    negativos = []


    for num in vetor:
        if (num > 0):
            positivos.append(num)
        elif (num < 0):
            negativos.append(num)

    print(f"\nVetor de numeros positivos: {positivos}")
    print(f"Vetor de numeros negativos: {negativos}")

    resp = input("\nDeseja continuar (sim / nao): ")