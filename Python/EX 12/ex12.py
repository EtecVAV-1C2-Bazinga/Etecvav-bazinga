
r = "s"
while(r=="s"):
    def soma(n):
        total = 0
        for i in range(n+1):
            total += i
        return total

    num = int(input("Digite um número inteiro: "))

    resultado = soma(num)
    print(f"A soma de 0 até {num} é: {resultado}")
    r = (input("\ndeseja continuar(s/n)? "))