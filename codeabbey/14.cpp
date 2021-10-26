#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char *value[]){

    unsigned long long suma_producto = atoi(value[1]);
    unsigned long long modulo = 0;

    for (int i = 2; i < argc; i+=2)
    {
        if (strcmp(value[i],"+") == 0){
            suma_producto += atoi(value[i+1]);
            printf("s %d\n", suma_producto);
            
        }
        else if (strcmp(value[i],"x") == 0) {
            suma_producto *= atoi(value[i+1]);            
            printf("p %d\n", suma_producto);
        }
        else if (strcmp(value[i],"%") == 0) {
            modulo = suma_producto%atoi(value[i+1]);            
            break;
        }        
    }
    cout<<"Modulo: "<<modulo<<"\n";
    
    return 0;
}

//88 x 61 + 320 + 38 x 75 x 779 x 3 x 2 + 1 x 3 + 887 + 1 + 7266 + 81 x 455 x 4451 x 4813 x 88 + 8 x 415 + 3144 + 34 x 725 x 8 + 4 + 6 x 805 + 64 + 2311 + 499 + 1 + 4 x 3256 x 4 + 7647 x 4345 + 9544 x 2 x 27 + 2 + 55 x 881 + 3 + 1841 x 9 + 81 + 2531 + 5694 x 73 x 29 x 1308 x 8625 x 770 x 932 % 9723