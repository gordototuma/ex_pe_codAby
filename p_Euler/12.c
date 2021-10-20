#include<stdio.h>
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
}