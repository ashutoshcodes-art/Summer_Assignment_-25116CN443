#include <iostream>
using namespace std;

int main(){
    int count = 0,num;
    cout<<"ENter number to count digits of : ";
    cin>>num;
    int n = num;
    while(n!=0){
        count+=1;
        n/=10;
    }
    cout<<"The "<<num<<" have "<<count<<" digits.";
    return 0;
}
