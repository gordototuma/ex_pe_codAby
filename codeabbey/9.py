from math import sqrt

with open('data.txt', 'r') as data:
    for x in data.readlines():
        a = [int(j) for j in x.split(' ')]
        p = (a[0]+a[1]+a[2])/2
        try:
            a= sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]))
            print(1, end=' ')
        except:
            print(0, end=' ')

        