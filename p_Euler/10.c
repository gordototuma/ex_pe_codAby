#include<stdio.h>
#include<math.h>

int main(){
    
    long int no_prime = 0;
    long int count = 2;
    long int suma = 0;

    for (long int i = 2; count < 2000000; i++)
    {
        no_prime = 0;
        for (long int j = 2; j <=sqrt(i); j++)
        {
            if(i%j == 0 && i!=j) no_prime = 1;
        }
        
        if(no_prime == 0){
            //if(i>=2000000) break;
            count = i;
            printf("%d + ",i);
            suma += i;                        
        }   

                    
        
    } 
       

    printf("\n%d", suma);

    return 0;
}