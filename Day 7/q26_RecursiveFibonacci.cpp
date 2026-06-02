#include <iostream>
using namespace std;
int fibonacci(int i){
    if(i<=1){
        return i;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}


int main (){
    int n;
    cout<<"Enter terms you wanna print of Fibonacci Series : ";cin>>n;
    cout<<"Fibonacci Series : ";
    for(int i = 0; i<=n ; i++){
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}