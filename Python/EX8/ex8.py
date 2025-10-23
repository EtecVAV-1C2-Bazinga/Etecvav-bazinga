
r = 's'
while (r == 's'):

    def lista_fibonacci(n):
        fib = []
        a, b = 0, 1
        for _ in range(n):
            fib.append(a)
            a, b = b, a + b
        return fib

    n = int(input("Digite o valor de n: "))

    resultado = lista_fibonacci(n)

    print("Resultado:", *resultado)

    r = (input("\nDeseja continuar (s/n)? "))