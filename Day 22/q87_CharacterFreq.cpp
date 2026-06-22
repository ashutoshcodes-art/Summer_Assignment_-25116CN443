#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkchr(char a,const vector<char> &b){ //const prevents any accidental modification in b
    for(char c : b){
        if(c==a){
            return true;
        }
    }
    return false;
}

int main(){
    string str;cout<<"ENter a String : ";getline(cin,str);
    vector<char> checked;
    int n = str.length();
    for(char ch : str){
        int freq=0;
        if(!checkchr(ch,checked)){
            for (int i = 0; i < n; i++)
            {
                if(ch==str[i]){
                    freq++;
                }
            }
            checked.push_back(ch);
            cout<<"Frequency of '"<<ch<<"' is : "<<freq<<endl;
        }
    }
    return 0;
}