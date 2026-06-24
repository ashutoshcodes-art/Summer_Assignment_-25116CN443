#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;cout<<"ENter a String : ";getline(cin,str);
    string longest;
    for (int i = 0; i < str.length(); i++)
    {   string temp = "";
        while(i < str.length() && str[i] != ' '){
            temp += str[i];
            i++;
        }
        if(temp.length()>longest.length()){
            longest = temp;
        }
    }
    cout<<"Longest word is : "<<longest<<endl;
    return 0;
}