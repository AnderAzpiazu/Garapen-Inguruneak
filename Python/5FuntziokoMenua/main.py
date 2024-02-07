def eskailera():
    altuera = int(input("Sartu eskaileraren altuera: "))
    zabalera = 2
    for alt in range(2, altuera+1):
        eskaloia = alt * 2
        print("*" * zabalera + "*" * eskaloia)

def ahorcado():
    input()


def piramidea():
    aukera = input("Piramide normala(N) edo alderantzizkoa(A)")
    aukera = aukera.upper()
    if aukera == "N":
        altuera = int(input("Sartu piramidearen altuera: "))
        for linea in range (0, altuera):
            hutsunea = altuera - linea - 1
            marrazkia = linea * 2 + 1
            print(" " * hutsunea + "*" * marrazkia)
    elif aukera == "A":
        altuera = int(input("Sartu piramidearen altuera: "))
        for linea in reversed(range(0, altuera)):
            hutsunea = altuera - linea - 1
            marrazkia = linea * 2 + 1
            print(" " * hutsunea + "*" * marrazkia)

def triangelua():
    input()


def erronbo():
    altuera = int(input("Sartu piramidearen altuera: "))
    for linea in range(0, altuera):
        hutsunea = altuera - linea - 1
        marrazkia = linea * 2 + 1
        print(" " * hutsunea + "*" * marrazkia)
    for linea in reversed(range(0, altuera)):
        hutsunea = altuera - linea - 1
        marrazkia = linea * 2 + 1
        print(" " * hutsunea + "*" * marrazkia)


def irtera():
    print("Programa ixten")
    quit()


if __name__ == "__main__":
    print("\nMenua")
    print("1. Aukera: Eskailera")
    print("2. Aukera: Aorkatuaren jokua")
    print("3. Aukera: Piramidea")
    print("4. Aukera: Triangelua")
    print("5. Aukera: Erronboa")
    print("0. Menutik Irten")

    aukera = input("Sartu zenbaki bat (0-5): ")

    if aukera == "1":
        eskailera()
    elif aukera == "2":
        ahorcado()
    elif aukera == "3":
        piramidea()
    elif aukera == "4":
        triangelua()
    elif aukera == "5":
        erronbo()
    elif aukera == "0":
        irtera()
    else:
        print("Aukera hau ez da existitzen, sartu beste zenbaki bat")
