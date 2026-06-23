#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void removespaces(string &a){
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]==' '){
            a.erase(i,1);
            i--;
        }
    }
}

void lowecase(string& a){
    for(char &ch : a){
        ch = tolower(ch);
    }
}

int main(){
    string a;cout<<"ENter string : ";getline(cin,a);
    removespaces(a);
    lowecase(a);
    
    //without storing visited characters
    int freq=0;char ch = '\0';
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        bool visited = false;
        for (int k = 0; k < i; k++)
        {
            if(a[i]==a[k]){
                visited = true;
                break;
            }
        }

        if(visited){
            continue;
        }
        int tempfreq=0;
        for (int j = 0; j < n; j++)
        {
            if(a[i]==a[j]){
                tempfreq++;
            }
        }
        if(freq<tempfreq){
            freq = tempfreq;
            ch = a[i];
        }
        
    }
    

    cout<<"The Max occuring charter is '"<<ch<<"'"<<endl<<"Occured : "<<freq<<" times"<<endl;
    return 0;
}