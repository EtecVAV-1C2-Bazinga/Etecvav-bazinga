resp = "sim"

while(resp == "sim" or resp == "s"):
    
    escalas = str(input("\nDigite (F) para Fahrenheit ou (C) para Celsius: "))

    temperatura = float(input("Digite a temperatura: "))

    if(escalas == "F" or escalas == "f"):
        tempConvertida = ( 5/9 * (temperatura - 32))
        print(f"A temperatura em Celcius é: {tempConvertida}°C")
    else:
        tempConvertida = ((temperatura * 9/5) + 32)
        print(f"A temperatura em Fahrenheit é: {tempConvertida}°F")

    resp = str(input("\n\nDeseja continuar (sim / nao)? "))

