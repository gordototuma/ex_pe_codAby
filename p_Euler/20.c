#include<stdio.h>

unsigned long long facorial(unsigned long long numero){
    printf("%d ", numero);
    if (numero != 0)
    {
        unsigned long long r = numero * facorial(numero-1);  
        return r;   
    }
    return 1;   
}



int main(){
        
    unsigned long long fac_10 = facorial(100);

    printf("%lld", fac_10);

    /*int p =1;
    for (int i = 100; i > 0; i--)
    {
        p *=i;
        printf("%d %d\n",p, i);
        
    }*/
    

    return 0;
}


/* SOLUCION EN PYTHON - RETO: HACERLA EN C/C++

import math

factorial_100 = math.factorial(100)
suma = 0
for digito in  str(factorial_100):
  suma += int(digito)
print(suma)

*/