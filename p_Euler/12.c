/*#include<stdio.h>
#include<math.h>

int main(){
    int factores =1;
    for (int i = 1; i < 7; i++)
    {
        printf("%d: ", i);
        for (int j = 2; j < sqrt(i); j++)
        {
            if(i%j==0) printf("%d", j);
        }
        printf("\n");
        
    }
    
    
    

    return 0;
}*/

/*
 * Referencias para la solucion: 
 *      Matemáticas Discretas - Johnsonbaugh, Teorema 5.1.7 p. 185, 191
*/

#include<stdio.h>
#include<math.h>

int main(){
    
    for(int i = 2; i <= sqrt(600851475143); i++){
        int j = 2;
        int divisores = 0;
        if(600851475143%i == 0){

            for(j; j <= sqrt(i); j++){
                if(i%j == 0) divisores = 1;            
            }
            if(!divisores) printf("%d\n",i);
        }
    }
    return 0;
}