with open('data.txt', 'r') as data:
    
    modulo = 0
    opracion = data.readlines()[0].split(' ')
    suma = int(opracion[0])
    for x in range(1,len(opracion)):
        if opracion[x] =='+':            
            suma +=int(opracion[x+1])
        elif opracion[x] =='*':
            suma *=int(opracion[x+1])                    
        elif opracion[x] =='%':
            modulo = int(suma)% int(opracion[x+1])    
    print(modulo)