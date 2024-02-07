import csv
import datetime

def erabiltzaileak_sortu():
    f = open('names.csv', 'w')
    with f:
        fizena = ['Bezero_Kod', 'Izena', 'Abizena', 'Mugikorra', 'Sartze_Data']
        idazlea = csv.DictWriter(f, fieldnames=fizena)
        idazlea.writeheader()
        a = 'B'
        while a=='B':
            bezero_kod=int(input("Sartu bezeroaren kodea: "))
            izena=input("Sartu bezeroaren izena: ")
            abizena=input("Sartu bezeroaren abizea: ")
            mugikorra=int(input("Sartu bezeroaren telefono zenbakia: "))
            sartze_data = input("Noiz sartu zen enpresara? ")
            data = datetime.strptime(sartze_data, '%y/%m/%d')
            idazlea.writerow({'Bezeroen kodigoa':bezero_kod, 'Izena': izena, 'Abizena': abizena, 'Mugikorra': mugikorra, 'Sartze Data': sartze_data})
            a = input("Beste bezero bat sortu nahi al duzu? (B/E) ")
        f.close()

def erabiltzaileak_irakurri():
    f = open('names.csv', 'r')
    with f:
        irakurlea = csv.DictReader(f)
        izenburuak = irakurlea.fieldnames
        print(izenburuak)
        for row in irakurlea:
            print(row['Bezero_Kod'], row['Izena'], row['Abizena'], row['Mugikorra'], row['Sartze_Data'])
    f.close()

def irten():
    print('Programa ixten')
    quit()

while True:
    print('Menua')
    print('=====================')
    print('0. Irten programatik')
    print('1. Sartu bezeroak')
    print('2. Bezeroak bistaratu')
    aukera = int(input('Zer nahi duzu egin?'))

    if (aukera==0):
        irten()
    elif (aukera==1):
        erabiltzaileak_sortu()
    elif(aukera==2):
        erabiltzaileak_irakurri()
    else:
        print('Aukera okerra aukeratu duzu.')