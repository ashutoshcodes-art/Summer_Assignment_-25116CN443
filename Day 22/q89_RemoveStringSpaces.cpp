#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;cout<<"ENter a String : ";getline(cin,str);
    for(int i =0 ; i < str.length() ;i++){
        if(str[i]==' '){
        str.erase(i,1); //str.erase(start_index, number_of_characters)
        i--;
        }
    }

    // OR try by making new string
    // string neww;
    // for(char ch : str){
    //     if(ch!=' '){
    //         neww += ch;
    //     }
    // }

    cout<<"Your String after removing spaces : "<<str<<endl;
    // cout<<"Your String after removing spaces : "<<neww<<endl;
    return 0;
}