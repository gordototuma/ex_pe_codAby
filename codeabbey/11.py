b = 0

with open('data.txt', 'r') as data:
    for i in data.readlines():
        a = i.split(' ')
        r = str(int(a[0])*int(a[1])+int(a[2]))

        for x in r:
            b += int(x)
                
        print(b, end=' ')
        b = 0