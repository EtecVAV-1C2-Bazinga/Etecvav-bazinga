r = "s"
while (r=="s"):
    num = int(input("Digite um número: "))

    for linha in range(1, num + 1):
        for vert in range(1, linha + 1):
            print(vert, end=' ')
        print()

    r = str(input("\nDeseja continuar (s/n)? "))
