resp = "sim"

while( resp == "sim" or resp == "s" ):

    seq1 = list(map(int, input(" Digite a primeira sequencia: ").split()))
    seq2 = list(map(int, input(" Digite a segunda sequencia: ").split()))

    resultado = []
    i = x = 0

    while i < len(seq1) and x < len(seq2):
        if seq1[i] <= seq2[x]:
            resultado.append(seq1[i])
            i += 1
        else:
            resultado.append(seq2[x])
            x += 1

    while i < len(seq1):
        resultado.append(seq1[i])
        i += 1

    while x < len(seq2):
        resultado.append(seq2[x])
        x += 1

    print( "Resultado:" , ' '.join(map(str, resultado)))

    resp = input("\nDeseja continuar (sim / nao): ")