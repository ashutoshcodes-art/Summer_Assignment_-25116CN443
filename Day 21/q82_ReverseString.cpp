#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str1;
    cout<<"Enter String : ";
    getline(cin,str1);
    cout<<"Your entered string : "<<str1<<endl;
    
    //Reversing string
    int start =0;
    int end = str1.length() -1;
    while (start<end)
    {
        swap(str1[start],str1[end]);
        start++;
        end--;
    }

    // or using reverse() function defined in #include <algorithm>
    // reverse(str1.begin(),str1.end());
    
    cout<<"Reversed string : "<<str1<<endl;

    return 0;
}