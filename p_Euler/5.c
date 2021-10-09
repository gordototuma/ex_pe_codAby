#include<stdio.h>

int main(){
    int number = 1;
    int v = 1;
    while (v){
        int divisor = 1;
        while (number%divisor == 0){
            if (divisor == 20){
                printf("%d", number);
                v=0;
                break;
            }               
            divisor++;            
        }
        number ++;
    }       
    return 0;
}