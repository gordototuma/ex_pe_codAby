with open('data.txt', 'r') as data:
    suma = 0
    for x in data.readlines():
        suma += int(x)
    
    print(str(suma)[0:10])