#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"ENter a number to check : ";
    cin>>num;
    for(int i = 1 ; i< num ; i++){
        if(num%i==0){
            sum += i;
        }
    }
    (sum == num) ? cout<<"Yes the "<<num<<" is Perfect Number" : cout<<"No the "<<num<<" is not Perfect Number";
    return 0;
}