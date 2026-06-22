#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string a;cout<<"ENter string : ";getline(cin,a);
    cout<<"Your entered string is : "<<a<<endl;

    //converting all to lowercase
    for(char &ch : a){
        // if(ch>='A' && ch<='Z'){  //if condition not needed because it only converts uppercase to lowercase and leave all other things like symbols spaces as they are or we can use ascii vakues bcs there is 32 difference b/w capital and small alphabets
            ch = tolower(ch);
        // }
    }

    //REversing string
    string rev= a;

    reverse(rev.begin(),rev.end());
    
    (rev == a) ? cout<<"String is Palindrome" : cout<<"String is not Palindrome";
    return 0;
}