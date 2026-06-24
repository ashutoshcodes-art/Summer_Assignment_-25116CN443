#include <iostream>
#include <string>
using namespace std;

int main(){
    string a,b;cout<<"Enter fisrt string : ";getline(cin,a);cout<<"Enter second string to check Rotation : ";getline(cin,b);

    if(a.length()!=b.length()){
        cout<<"Strings are not Rotations of each other"<<endl;
        return 0;
    }
    //A rotation of A must always be a substring of A + A
    string temp = a+a;

    if(temp.find(b)!=string::npos){
        cout<<"Strings are Rotations of each other"<<endl;
    }
    else cout<<"Strings are not Rotations of each other"<<endl;

    return 0;
}