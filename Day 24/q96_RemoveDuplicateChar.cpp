#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;cout<<"Enter a String : ";getline(cin,str);
    //I am ignoring spaces
    for (int i = 0; i < str.length(); i++)
    {
        
        if(str[i]==' '){
            continue;
        }

        for (int j = i+1; j < str.length(); j++)
        {
            if(str[i]==str[j]){
                str.erase(j,1);
                j--;
            }
        }
        
    }
    cout<<str<<endl;
    
    return 0;
}