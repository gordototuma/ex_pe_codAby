#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    //Contar la cantidad de lineas
    ifstream data("data.txt");
    string sentence;
    int numero_lineas=0;
    while (getline(data,sentence))
    {
        numero_lineas+=1;       
    }
    
    string datos2[numero_lineas];
    data.close();

    //Converit las cada linea en array
    ifstream data2("data.txt");
    string sentence2;

    for (int i = 0; i < numero_lineas; i++)
    {
        while (getline(data2,sentence2))
        {
            datos2[i]=sentence2;
            break;
        }        
    }

    data.close();

    for (int i = 0; i < numero_lineas; i++)
    {
        int k = datos2[i].length(); 
        cout<<k<<endl;
        
        //string cadena = datos2[i];
        //string real_n(" ");
        
        
               
        
    }
    
    

        


    return 0;

}