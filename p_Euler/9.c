#include<stdio.h>

int main(){
    
    int eureca = 0;
    for (int a = 1; a < 500; a++)
    {
        for (int b = 1; b < 500; b++)
        {
            for (int c = 1; c < 500; c++)
            {
                if ( (a*a)+(b*b) == (c*c) && a+b+c== 1000 )
                {
                    printf("%d,%d,%d\n", a, b, c);
                    printf("%d\n", a*b*c);                                            
                }                
            }
            if (eureca == 1) break;                        
        }
        if (eureca == 1) break;        
    }
    
    

    return 0;
}