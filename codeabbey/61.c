#include<stdio.h>
#include<math.h>

int main(){ 

    int count = 0;
    int sen = 0;
    for (int i = 2; count < 200000; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if(i%j==0){
                sen = 1;
                break;
            }             
        }

        if (sen==0)
        {
            count += 1;
            if(count == 109168 || count == 148755 || count == 129254 || count ==178834 || count == 116971 
            || count == 155713 || count == 103810 || count == 101315 || count == 174558 || count == 193127
            || count == 1 || count == 10){
                //printf("%d - %d\n", i, count);
                printf("%d ", i);
            }
            
        }
        sen = 0;
              
    }
    

    return 0;
}