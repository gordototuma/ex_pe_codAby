with open('data.txt', 'r') as data:
    print(data.readline())
    print(data.readline())
    data.readline()
    print(data.readline())
    """operacion = 0
    for valor in data.readlines():
        
        if valor == '*\n': operacion *= int(data.readlines().rstrip('\n'))
        elif valor == '+\n': operacion += int(data.readline())
        elif valor == '%\n': operacion = operacion%int(data.readlines().rstrip('\n'))
        else: 
            operacion += int(valor)
        print(operacion)
        input()    
    """
        
    
    #print(operacion)
