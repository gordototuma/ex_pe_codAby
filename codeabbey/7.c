#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(int argc, char * args[]){
    
    for (int i = 2; i < argc; i++)
    {
        int *fahr = *(args+i);
        int fahren = atoi(fahr);

        float celsius = ((float)fahren - (float)32)  /1.8;
        if (celsius-(int)celsius>=0.500000) printf("%d ", (int)ceil(celsius));
        else printf("%d ", (int)celsius);        

    }
    
    

    return 0;
}

https://stackoverflow.com/questions/43160958/passing-a-integer-through-command-line-in-c/43161028
https://www.infor.uva.es/~cevp/introduccion_C/Vector_arg_main.htm