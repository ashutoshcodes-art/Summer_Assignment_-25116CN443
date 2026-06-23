#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string str;cout<<"ENter a String : ";getline(cin,str);
    int n = str.length();
    for(char &ch : str){
        ch = tolower(ch);
    }
    bool found = false;

    for(char ch : str){
        if(ch==' '){
            continue;
        }
        int freq= 0;
         for (int i = 0; i < n; i++)
            {
                if(ch==str[i]){
                    freq++;
                }
            }
        if(freq==1){
            cout<<"The first Non-Repeating Character is '"<<ch<<"'"<<endl;
            found = true;
            break;
        }
    }
    if (!found)
        {
            cout<<"The non repeating character not found"<<endl;
        }
    return 0;
}