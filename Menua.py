import random
def triangelua():
    print("Triangelu bat egin.")
    tamaina = int(input("Sartu triangeluaren tamaina: "))
    for i in range(tamaina): # For-ak sortzeko aldagaia eta zenbakia sartu behar dira
        for j in range(i + 1):
            print("* ", end="") # Marrazkia egiten bukatzean end bidez ezpazioa generatuko da
        print(" ")

def karratua():
    print("Karratu bat egin.")
    altuera = int(input("Sartu karratuaren altuera: "))
    zabalera = int(input("Sartu karratuaren zabalera: "))
    for row in range(altuera):
        for col in range(zabalera):
            print("* ", end="")
        print("")

def guess_number():
    print("1etik 100erako zenbakia aurkitu.")
    zenbakia = random.randint(1, 100) # Zenbaki aleatorio bat sortzen du zuk sartutako zenbakien artean
    saiakerak = 0
    asmatuta = False
    while not asmatuta: # While - loop baten bidez True izan arte ez da bukatuko
        prueba = input("Sartu zure saiakera (1 eta 100 artean): ")
        saiakerak += 1 # Saiakera bakoitzeko zenbaki bat gehituko du
        if not prueba.isdigit(): # Erantzuna okerra den begiratzen du
            print("Ez duzu asmatu! Sartu beste zenbaki bat")
            continue
        prueba = int(prueba)
        if prueba < 1 or prueba > 100: # 1 eta 100 zenbakien artean sartu dela begiratzen du
            print("Zenbakia 1 eta 100 artean izan behar da")
            continue
        if prueba < zenbakia: # if elif eta else bidez handiago txikiago edo asmatu den begiratzen da
            print("Zenbakia altuagoa da.")
        elif prueba > zenbakia:
            print("Zenbakia txikiagoa da.")
        else:
            print(f"Zorionak!! Zenbakia {saiakerak} saiakeretan asmatu duzu.")
            asmatuta = True # Asmatuta True bihurtu denez jokua amaitutzat ematen da

def piramidea():
    print("Piramide bat egin.")
    row = int(input("Zenbat lerrotako piramidea nahi duzu sartu? "))
    for row_kop in range(row):
        hutsunea = row - row_kop - 1 # Hutsunearen lerroak egiten ditu
        marrazkia = 1 + row_kop * 2 # Non dijoazten marrazkiak zehazten ditu
        print(" " * hutsunea + "*" * marrazkia) # + kateak lotzeko erabiltzen da eta * Katea errepikatzeko

def irtera():
    print("Programa ixten.")
    quit()

while True:
    print("\nMenua:")
    print("1. Aukera: Triangelua")
    print("2. Aukera: Karratua")
    print("3. Aukera: Zenbakiaren jokua")
    print("4. Aukera: Piramidea")
    print("0. Irten")

    aukera = input("Enter your choice (1-4): ")

    if aukera == "1":
        triangelua()
    elif aukera == "2":
        karratua()
    elif aukera == "3":
        guess_number()
    elif aukera == "4":
        piramidea()
    elif aukera == "0":
        irtera()
    else:
        print("Aukera hau ez da existitzen aukeratu beste bat")
