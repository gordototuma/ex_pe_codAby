#include<stdio.h>
#include<iostream>

int main(int argc, char *valores[]){
    printf("\n");

    for (int i = 1; i < argc; i+=4)
    {
        int a = 0;
        int b = 0;
        //x1 y1 x2 y2
        //a = y1-y2 / X1- x2
        a = (atoi(valores[i+1])-atoi(valores[i+3]))/(atoi(valores[i])-atoi(valores[i+2]));

        //b= y1-ax1
        b = atoi(valores[i+1])-(a*atoi(valores[i]));

        printf("(%d %d) ", a,b);    
            
    }

    

    return 0;
}