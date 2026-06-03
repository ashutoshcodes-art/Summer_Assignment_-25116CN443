#include <iostream>
using namespace std;

int ReverseNum(int n,int rev=0){
    if(n==0){
        return rev;
    }
    return ReverseNum(n/10, rev*10 + n%10);
}

int main(){
    int num;cout<<"Enter a number to reverse : ";cin>>num;
    cout<<ReverseNum(num);
    return 0;
}