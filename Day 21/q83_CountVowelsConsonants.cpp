#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter String : ";getline(cin,str);
    cout<<"Entered String is : "<<str<<endl;

    //Counting Vowels a,e,i,o,u
    const char vowel[] = {'a', 'e', 'i', 'o', 'u','A','E', 'I', 'O', 'U'};
    int CountV=0,letters=0;
    for(char ch : str){
        if(ch==' '){
                continue;
            }
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        {
            letters++;
        
            for (int i = 0; i < sizeof(vowel)/sizeof(vowel[0]); i++) // To get length of array we do = (Total size of array/Size taken by one element)
            {
                if(ch==vowel[i]){
                    CountV++;
                    break;
                }
            }
        }    
    }
    // cout<<str<<endl;
    cout<<"In String"<<endl<<"Letters : "<<letters<<endl<<"Vowels : "<<CountV<<endl<<"Consonants : "<<letters-CountV;
    return 0;
}