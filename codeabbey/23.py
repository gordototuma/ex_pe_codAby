with open('data.txt', 'r') as data:
    numeros = data.readlines()[0].split(' ')
    intercambios = 0

    for x in range(len(numeros)):
        
        if(int(numeros[x])>int(numeros[x+1])):            
            if int(numeros[x+1]) == int(-1): break
            menor = int(numeros[x+1])            
            numeros[x+1] =int(numeros[x])            
            numeros[x] = menor            
            intercambios += 1
    
seed = 113
result = 0
limit = 10000007    

for x in numeros:
    if int(x) !=-1:
        result = ((result+int(x))*(seed))%limit

print(f'{intercambios} {result}')
    

# 1 4 3 2 6 5 -1