#include <iostream>
#include <string>
#include <vector>
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

bool visited(char c,const vector<char>& a){
    for(char ch : a){
        if(ch==c){
            return true;
        }
    }
    return false;
}

int main(){
    /*
    Anagram Strings = each character should have same freq in both the strings
    */
    string a;cout<<"ENter First string : ";getline(cin,a);
    string b;cout<<"ENter Second string : ";getline(cin,b);
    removespaces(a);removespaces(b);
    lowecase(a);lowecase(b);
    //If length is not same freq cant be same
    if(a.length()!=b.length()){
        cout<<"Given Strings are not Anagram"<<endl;
        return 0;
    }
    int n = a.length(); //since both lengths are equal we can use same for both strings
    //Checking each elements freq
    bool same=true;
    vector<char> store; //Store visited characters
    for(char ch : a){
        int freq1=0,freq2=0;
        if(!visited(ch,store)){
            for (int i = 0; i < n; i++)
            {
                if(ch==a[i]){
                    freq1++;
                }
                if(ch==b[i]){
                    freq2++;
                }
            }
            store.push_back(ch);
        }
        if(freq1!=freq2){
            cout<<"Given Strings are not Anagram"<<endl;
            same = false;
            break;
        }
    }
    if(same){
        cout<<"Given Strings are Anagram"<<endl;
    }

    return 0;
}