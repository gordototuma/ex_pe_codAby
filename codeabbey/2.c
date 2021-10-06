#include<stdio.h>


int main(){
    int list[43] = {1194, 45, 452, 45, 1098, 1019, 1149, 246, 1013, 63, 482, 1047, 90, 355, 181, 239, 463, 299, 934, 1261, 155, 108, 229, 166, 609, 160, 627, 1148, 135, 552, 646, 689, 967, 1146, 182, 782, 1040, 209, 528, 1152, 375, 567, 53};

    
    int sum_list = 0;

    for (int i =0; i<43; i++){
        sum_list = sum_list + list[i];
        printf("%d %d %d\n", i, list[i], sum_list);
    }

    printf("%d\n", sum_list);

    return 0;
}