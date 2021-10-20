#include<iostream>

using namespace std;

int main(int argc, char *args[]){
    int c_1=0;
    int c_2=0;
    int c_3=0;
    int c_4=0;
    int c_5=0;
    
    for (int i = 1; i <= 380; i++)
    {
        if(atoi(args[i])==1) c_1 ++;
        if(atoi(args[i])==2) c_2 ++;
        if(atoi(args[i])==3) c_3 ++;
        if(atoi(args[i])==4) c_4 ++;
        if(atoi(args[i])==5) c_5 ++;
    }

    printf("%d %d %d %d %d", c_1,c_2,c_3,c_4,c_5);
    

    return 0;
}