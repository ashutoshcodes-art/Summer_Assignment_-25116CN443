#include <iostream>
#include <string>
#include <cctype> //Vs code include it already but this is for knowledg
using namespace std;

int main(){
    string str;
    cout<<"Enter String : ";getline(cin,str);
    cout<<"Entered String is : "<<str<<endl;

    //Converting Upper case
    // for(char &ch : str){
    //     if(ch>='a' && ch<='z')
    //     {
    //         ch = ch - 32; // There is a difference of 32 in ASCII values of uppercase and lowercase alphabets 
    //     }    
    // }

    // by using functions we have to include <cctype>
    for(char &ch : str){
        if(ch>='a' && ch<='z')
        {
            ch = toupper(ch); // There is a difference of 32 in ASCII values of uppercase and lowercase alphabets 
        }    
    }
    cout<<str<<endl;
    
    return 0;
}