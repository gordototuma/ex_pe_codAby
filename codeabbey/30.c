#include<stdio.h>
#include<string.h>

int main(int argc, char *args[]){

    for (int i = argc-1; i > 0 ; i--)
    {
        for (int j = strlen(args[i]); j >= 0; j--)
        {
            printf("%c", *(args[i]+j));
        }
            
    }
    

    return 0;
}