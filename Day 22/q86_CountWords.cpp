#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;cout<<"ENter a String : ";getline(cin,str);
    bool inWord = false;
    int count=0;
    for(char ch : str){
        if(ch!=' ' && !inWord){ // when you are entering new word inWord = will be false then you turn it True
            count++; //adds word count 
            inWord = true; //tells you are in the word so it does't get counted on every letter
        }
        else if(ch==' '){
            inWord=false; //Tells you came out of current word
        }
    }

    cout<<"Number of words in given string is : "<<count<<endl;
    return 0;
}