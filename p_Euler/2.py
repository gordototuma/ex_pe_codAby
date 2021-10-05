a = 1
b = 2
c = 2

print(f'{1} {2}', end=', ')

while a <= 4*(10**6) and b <= 4*(10**6):

    a= a+b
    print(f'{a}', end=', ')
    b= a+b
    print(f'{b}', end=', ')

    if a%2 == 0:
        c += a
    elif b%2 == 0:
        c += b

print(f'Suma Pares = {c}')
    
