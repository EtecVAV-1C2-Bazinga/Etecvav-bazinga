r = "s"
while(r=="s"):

    num = int(input("Qual é seu número? "))

    if(num>=100 and num<=200):
        print("O número" ,num, "está entre 100 e 200")

    else:
        print("O número" ,num, "não está entre 100 e 200")

    r = str(input("deseja continuar (s/n)? "))
