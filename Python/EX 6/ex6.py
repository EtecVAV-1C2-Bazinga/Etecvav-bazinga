
def calcular_fatorial(n):
    """Calcula o fatorial de num"""
    if n == 0 or n == 1:
        return 1
    else:
        fatorial = 1

        for i in range(2, n + 1):
            fatorial *= i

        return fatorial


resp = "sim"

while(resp == "sim" or resp == "s"):
    
    soma_fatoriais = 0
    print("\nDigite 5 valores inteiros:")
        
    for i in range(5):

        valor = int(input(f"\nValor {i + 1} : "))
            
        fatorial_valor = calcular_fatorial(valor)

        print(f"Fatorial de {valor} = {fatorial_valor}")

        soma_fatoriais += fatorial_valor
        
    print(f"\nTotal do somatório dos fatoriais é : {soma_fatoriais}")
    
    resp = str(input("\n\nDeseja continuar (sim / nao)? "))