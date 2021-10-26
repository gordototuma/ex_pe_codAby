#include<iostream>
#include<fstream>
#include <stdio.h>
#include <ctype.h>

using namespace std;


int main(){


    ifstream data("data.txt");
    string cadena;

    while (getline(data, cadena))
    {
        int x=0;
        int a=0;
        char palabra[cadena.length()];
        while (x<cadena.length())
        {
            if(cadena[x]== ' ' || cadena[x]== '!' || cadena[x]== ',' || cadena[x]== '?' || cadena[x]== '-'){
                x++;      
                continue;                   
            }
            
            char caracter = cadena[x];
            palabra[a]=tolower(caracter);                                 
            a++;
            x++;         
        }
        
        for (int i = 0; i < a; i++)
        {            

            if(palabra[i] != palabra[a-1-i]){
                cout<<"N ";
                break;
            }
            else if (i+1==a){
                cout<<"Y "; 
            }                          
        }       
        
    }
    data.close();    

    return 0;
}