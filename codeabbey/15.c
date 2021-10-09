#include<stdio.h>
#include<stdlib.h>

int main(int argc, int *args[]){
    
    int menor = 70079;
    int mayor = 70079;

    for (int i = 1; i < argc; i++)
    {
        int *numero = *(args+i);
        int numero_cast = atoi(numero);        
        if(menor>=numero_cast) menor = numero_cast;                
        if(mayor<=numero_cast) mayor = numero_cast;        
    }

    printf("%d\n", mayor);
    printf("%d\n", menor);
    return 0;
}