resp = "sim"

while(resp == "sim" or resp == "s"):
    
    num1 = int(input("\nDigite o 1º numero: "))
    num2 = int(input("Digite o 2º numero: "))

    operator = str(input("Escolha um operador aritmético ( + ) ( - ) ( * ) ( / ): "))

    if(operator == "+"):
        soma = num1 + num2
        print(f"{num1} + {num2} = {soma}")
    elif(operator == "-"):
        sub = num1 - num2
        print(f"{num1} - {num2} = {sub}")
    elif(operator == "*"):
        multi = num1 * num2
        print(f"{num1} x {num2} = {multi}")
    else: 
        div = num1 / num2
        print(f"{num1} / {num2} = {div}") 
    

    resp = str(input("\n\nDeseja continuar (sim / nao)? "))

