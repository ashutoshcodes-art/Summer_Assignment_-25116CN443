#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;cout<<"Enter String: ";getline(cin,a);

    string compressed = "";

    for (int i = 0; i < a.length(); i++)
    {   int count = 1;
        while(a[i]==a[i+1] && i+1 <a.length()){
            count++;
            i++;
        }
        compressed += a[i];
        compressed += to_string(count);
    }

    cout<<"Compressed String is : "<<compressed<<endl;
    
    return 0;
}