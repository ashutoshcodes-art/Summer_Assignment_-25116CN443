#include <iostream>
#include <string>
using namespace std;

int Strlength(string str){ //Creates copy so org string reamains same
    int count=0;
    while(!str.empty()){
        count++;
        str.pop_back();
    }
    return count;
}

int main(){
    string st;
    //Input string
    cout<<"enter string : ";
    getline(cin,st);
    cout<<"Length of string is : "<<Strlength(st)<<endl;
    // cout<<st<<endl;
    return 0;
}