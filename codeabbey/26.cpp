#include<iostream>

int gcd(int a, int b){

    int c = 0;

    do
    {       
        c = a%b;
        a=b;
        b=c;
        
    } while (c!=0);

    return a;
    
}

int main(int argc, char *valores[]){

    int a = 0;
    int b = 0;

    for (int i = 1; i<=argc-2 ; i+=2)
    {
        a= atoi(valores[i+1]);
        b= atoi(valores[i]);
        if(b<=a){            
            printf("(%d %d) ", gcd(a,b),  a*b/gcd(a,b));
        }         
        else{            
            printf("(%d %d) ", gcd(b,a),  a*b/gcd(b,a));
        } 
    }
    return 0;
}
