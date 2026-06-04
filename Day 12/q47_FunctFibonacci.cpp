#include <iostream>
using namespace std;

int Fibonacci(int n){
    if(n<=1){
        return n;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n;cout<<"Enter number of terms of fibo you want : ";cin>>n;
    if(n<1){
        cout<<"Enter terms more than 0";
    }
    else {
        cout<<"Fibonacci Series : ";
        for (int i = 0; i < n ; i++)
        {
            cout<<Fibonacci(i)<<" ";
        }
        
    }
    return 0;
}