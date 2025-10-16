resp = "sim"

while(resp == "sim" or resp == "s"):

    print("\n      ---  Verificador de ano bissexto ---         ")
    ano = int(input("\nDigite um ano: "))

    if(ano % 4 == 0 and ano % 100 != 0) or (ano % 400 == 0):
        print(f"\n{ano} é um ano bissexto.")
    else:
        print(f"\n{ano} não é um ano bissexto.")

    resp = str(input("\n\nDeseja continuar (sim / não)? "))