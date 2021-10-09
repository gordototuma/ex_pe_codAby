#include<stdio.h>

int main(){
    int gauss = (100*(100+1))/(2);
    int sum_of_squares = (100*(100+1)*(2*100+1))/6;
    printf("%d", (gauss*gauss)-sum_of_squares);
    return 0;
}