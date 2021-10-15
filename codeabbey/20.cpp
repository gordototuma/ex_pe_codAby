#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(){

    ifstream data("data.txt");
    string sentence;
    int count_vowel = 0;

    while (getline(data, sentence))
    {   
        
        for(int i =0; i<sentence.length() ;i++)
            if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' || sentence[i]=='o' || sentence[i]=='u' || sentence[i]=='y') count_vowel++;            

        cout<<count_vowel<<" ";        
        count_vowel = 0;
    }    

    data.close();

    return 0;

}