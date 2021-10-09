#include<stdio.h>

int main(){

    for (int i = 100; i <= 999; i++)
    {
        for (int j = 100; j <= 999; j++)
        {
            printf("%d x x%d = %d\n",i,j,i*j);
        }        
    }
    return 0;
}