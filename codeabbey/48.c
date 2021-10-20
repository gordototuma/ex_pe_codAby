#include<stdio.h>

int main (){
    int numbers[] = {35339, 8949, 399, 2490, 18, 6029, 444, 456, 256, 155, 46, 38979, 38, 492, 91, 165, 310, 11, 355, 45, 17};
    
    for (int i = 0; i < 21; i++)
    {
        int x = numbers[i];
        int c = 0;

        while (x!=1)
        {
            if(x%2==0) x = x/2;
            else x = (x*3)+1;
            c++;
        }
        printf("%d ", c);
        
    }
    
    



    return 0;
}