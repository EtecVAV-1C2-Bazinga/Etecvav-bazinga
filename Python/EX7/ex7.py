resp = "sim"

while(resp == "sim" or resp == "s"):

    seq1 = input("Primeira sequencia: ").replace(" ", "")  
    seq2 = input("Segunda sequencia: ").replace(" ", "")

    contador = 0
    tamanho_seq1 = len(seq1)

    for inicio in range(len(seq2) - tamanho_seq1 + 1):
        parte = seq2[inicio : inicio + tamanho_seq1]
        if parte == seq1:
            contador += 1

    print("Resultado:", contador)

    resp = input("\nDeseja continuar (sim / nao): ")
