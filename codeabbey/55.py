"""
#include<stdio.h>

int main(int argc, char *argv[]){

    printf("\n\n\n");

    int a = 0;

    for (int i = 1; i < argc; i++)
    {        
        for (int j = 1; j < argc; j++)
        {
            //printf("\n%s %s %d", argv[i], argv[j], a);
            
            if (argv[i] == argv[j]){
                printf("\n=========================");
                a++;
                printf("\n=========================");
                printf("\n%s %s %d", argv[i], argv[j], a);
                printf("\n=========================\n");
            } 
            
            if(a==2){
                printf("%s ", argv[i]);
                a=0;
                break;
            }
        }
        
        
    }
    

    return 0;
}

"""
#RETO HACERLO EN C/C++

with open('data.txt', 'r') as data:
    frase = data.readlines()[0].split(' ')
    data_repetida = []
    for x in frase:
        if(' '.join(frase).count(x)>=2):
            if x not in data_repetida:
                data_repetida.append(x)
    data_repetida.sort()
    
    for word in data_repetida:
        print(word, end=' ')



