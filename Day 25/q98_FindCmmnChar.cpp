#include <iostream>
#include <string>
using namespace std;

void lower(string& x){
    for(char &ch : x){
        ch = tolower(ch);
    }
}

int main(){
    string a,b;cout<<"Enter First String : ";getline(cin,a);cout<<"Enter Second String : ";getline(cin,b);
    lower(a);lower(b);
    cout<<"Common Elements are : ";
    
    for (int i = 0; i < a.length(); i++)
    {
        bool found = false;
        if(a[i]==' '){
            continue;
        }

        for (int j = 0; j < i; j++)
        {
            if(a[i]==a[j]){
                found = true;
                break;
            }
        }

        if(found){
            continue;
        }

        else{
            for (int j = 0; j < b.length(); j++)
            {
                if(a[i]==b[j]){
                    cout<<a[i]<<" , ";
                    break;
                }
            }
        }
    }
    
    return 0;
}