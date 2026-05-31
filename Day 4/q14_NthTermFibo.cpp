#include <iostream>
using namespace std;

int fibonacci(int x){
    // if(x<1){
    //     return 0;
    // }
    // if(x==1 || x == 2){
    //     return 1;
    // }
    return (x<=1) ? x :  fibonacci(x-1) + fibonacci(x-2);
}

int main(){
    int n;
    cout<<"Enter which term of Fibonacci You wanna Print : ";
    cin>>n;
    (n<0) ? (cout<<"Enter number >0") : (cout<<n<<"th term of fibonacci series is : "<<fibonacci(n));
    return 0;
}