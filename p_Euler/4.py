a=0
for x in range(1,1000):
    for y in range(1,1000):
        p = x*y
        if str(p)[::-1] == str(p) and len(str(x))==3==len(str(y)):
            if a<p:
                a=p;
                print(f'{x} x {y} = {p}')
