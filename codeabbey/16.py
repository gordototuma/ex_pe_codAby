with open('data.txt', 'r') as data:
    for linea in data.readlines():
        numeros = [int(x) for x in linea.split(' ')]
        sum = 0
        avg = 0
        for numero in numeros:
            sum +=numero
        avg = round(sum/(len(numeros)-1))
        print(avg, end=' ')
        

