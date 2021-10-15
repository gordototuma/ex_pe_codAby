#include<stdio.h>
#include<math.h>

int main(){

    int contador_10001 = 1;
    int count =3;
    for (int i = 2; i < count; i++)
    {
        int s = 0;

        for (int j = 2; j <= (int)sqrt(i); j++)
        {
            if(i%j==0 && i!=j){ 
                s=1;
                break;
            }
        }
        if (s==0){
            printf("%d - ", i); 
            printf("%d\n", contador_10001);
            contador_10001++;
            if (contador_10001==10002) break; 
        } 
        count++;
    }

    return 0;
}