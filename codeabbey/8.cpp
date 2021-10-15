#include<iostream>

using namespace std;

int main(int argc, char *args[]){

    int digito = 0;
    int suma = 0;
    for(int i = 0; i<stoi(args[3]); i++){
        
        if(i==0) digito += stoi(args[i+1]);
        else digito += stoi(args[2]);           
        suma = suma+ digito;
    }   
    
    cout<<suma<<endl;
    return 0;
}