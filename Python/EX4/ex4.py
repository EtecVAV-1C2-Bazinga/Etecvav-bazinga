
r = 's'
while (r == 's'):

    def primo(num):
        if num <= 1:
            return False
        for i in range(2, int(num ** 0.5) + 1):
            if num % i == 0:
                return False
        return True

    def menorprimo(n):
        while not primo(n):
            n += 1
        return n

    def maiorprimo(n):
        while not primo(n):
            n -= 1
        return n

    n = int(input("Digite um número n: "))

    menor_primo = menorprimo(n)
    maior_primo = maiorprimo(n)

    print(f"O menor número primo maior ou igual a {n} é: {menor_primo}")
    print(f"O maior número primo menor ou igual a {n} é: {maior_primo}")

    r = (input("\nDeseja continuar (s/n)? "))