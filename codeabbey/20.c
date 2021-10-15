#include<stdio.h>

int main(){

    char *a = "abracadabra";
    int c = 0;
    for (int i = 0; i < 11; i++)
    {
        //printf("%c", a[i]);
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')c++;
    }
    printf("%d",c);
    return 0;    
}