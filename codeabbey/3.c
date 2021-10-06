#include<stdio.h>

int main(){
    int array_one[13] = {48302,375493,831514,569610,127420,880538,548201,668268,396995,772441,923297,689283,194736};
    int array_two[13] = {958514,861438,431030,568952,679602,113621,160120,995069,825158,647906,883596,857570,446199};
    int array_sum[13];

    for(int i=0; i<13; i++){
        array_sum[i] = array_one[i]+array_two[i];
    }

    for(int i=0; i<13; i++){
        printf("%d ", array_sum[i]);
    }

    return 0;
}