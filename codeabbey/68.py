with open('data.txt' , 'r') as data:
    for recorridos in data.readlines():
        recorridos_2 = [int(x) for x in recorridos.split(' ')]
        s = recorridos_2[0]
        a = recorridos_2[1]
        b = recorridos_2[2]
        distancia = s/(a+b)
        encuentro = a*distancia
        print(encuentro, end=' ')
        
        
