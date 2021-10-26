import math

c = 2
primo = True

for x in range(2,10):
    primo = True
    for j in range(2,math.sqrt(c)):
        if x%j == 0:
            primo = False                
            break
    