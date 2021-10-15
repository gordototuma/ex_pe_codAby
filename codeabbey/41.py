with open('data.txt', 'r') as data:
    for x in data.readlines():
        a = [int(j) for j in x.split(' ')]
        if(a[0]<a[1]<a[2] or a[2]<a[1]<a[0]):
            print(a[1], end=' ')
        elif(a[1]<a[0]<a[2] or a[2]<a[0]<a[1]):
            print(a[0] , end=' ')
        elif(a[1]<a[2]<a[0] or a[0]<a[2]<a[1]):
            print(a[2], end=' ')