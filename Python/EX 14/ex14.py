r = "s"
while(r=="s"):
    def eh_primo(n):
        if n < 1:
            return None
        if n == 1:
            return False
        if n == 2:
            return True
        if n % 2 == 0:
            return False
        for i in range(3, int(n**0.5) + 1, 2):
            if n % i == 0:
                return False
        return True

    numero = int(input("Digite um número inteiro: "))
    resultado = eh_primo(numero)

    if resultado is None:
        print("Número inválido (menor que 1).")
    elif resultado:
        print(f"O número {numero} é primo.")
    else:
        print(f"O número {numero} não é primo.")
    r = (input("\ndeseja continuar(s/n)? "))