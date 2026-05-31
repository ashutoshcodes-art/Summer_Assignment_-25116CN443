#include <iostream>
using namespace std;
int main(){
    int num,reverse=0;
      cout<<"Enter a number to find palindrome of : ";
    cin>>num;
    int n = num;
    while(n!=0){
        int temp = n%10;
        reverse*=10;
        reverse += temp;
        n/=10;
    }
    if(num==reverse){
        cout<<"Yes the "<<num<<" is Palindrome."<<endl;
    }
    else cout<<"No "<< num<< " is not Palindrome."<<endl;
}