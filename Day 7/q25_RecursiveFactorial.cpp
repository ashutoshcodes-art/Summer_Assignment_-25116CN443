#include <iostream>
using namespace std;

long long fact(long long num){
    if(num==0 || num == 1){
        return 1;
    }
    return (num*fact(num-1));
}

int main(){
    long long num; //Preventing overflow for larger values
    cout<<"Enter a number to find Factorial of : ";cin>>num;
    (num<0) ? cout<<"Factorial doesn't exist for Negative numbers" : cout<<"Factorial of "<<num<<" is : "<<fact(num);

    return 0;
}