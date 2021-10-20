#include<stdio.h>

int main() {

    unsigned long elements[] = {151159610, 52789, 34, 297, 64676, 10884872, 376164, 8455021, 984, 7, 9, 32848, 6, 54329299, 5176, 817982, 36885, 713, 37157, 536, 9048, 83};
    //long int elements[] ={3, 1, 4, 1, 5, 9};
    int seed = 113;
    unsigned long result = 0;
    int limit = 10000007;

    for (int i = 0; i < 22; i++)
    {
        result = ((result+elements[i])*(seed))%limit;
        /*
        result = ((result+elements[i])*seed);
        if(result>limit){
            result = ((result+elements[i])*seed)%limit;
        }*/
        printf("%d ", result);
    }

    printf("%ld", result);
    printf("\n==================\n");
    printf("%ld", (long)(151159610*(long)seed)%(long)limit);
    
    return 0;
}

//9880738