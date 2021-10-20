numeros = [i for i in '833534 1302207 300 77033816 7010 2624207 413348548 46 199274 3 19067065 16018 27 265818231 3864 14772 2348 6714 107 207095 848 96522344 1032201 6 1738467 26099036 15827812 16 0 36975 469 27064 331141 1'.split(' ')]

for numero in numeros:     
    i=1
    suma=0
    for digito in numero:                
        suma +=i*int(digito)
        i+=1
    print(suma, end=' ')