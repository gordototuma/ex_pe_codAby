#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ifstream data("data.txt");
    string numbers;
    string n_str = "";
    while (getline(data, numbers))
    {
        for (int i = 0; i < 3; i++){
            if(numbers[i] != ' '){
                string n_str = n_str + numbers[i];
            }

        }   
        
        //int n[total_n+1];
        for (int i = 0; i < total_n+1; i++)
        {
            n[i] = 
        }
        
        
    }    

    data.close();

    return 0;
}