#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *args[]){

    for (int i = 1; i <= argc; i++)
    {
        int *c_dividendo = *(args+i);
        int *c_divisor = *(args+i+1);

        int dividendo = atoi(c_dividendo);
        int divisor = atoi(c_divisor);

        float d = (float)dividendo/(float)divisor;        
        
        if(d-(int)d>=0.5){
            //Redonde hacia arriba
            int a = (int)ceil(d);
            printf("%d ",a);    
        }
        else{
            //redonde hacia abajo
            int a = (int)floor(d);
            printf("%d ",a);
        }
        
        i+=1;
    }
    
    return 0;    
    
}