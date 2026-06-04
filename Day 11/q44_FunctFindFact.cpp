#include <iostream>
using namespace std;

int FinfFact(int x){
    if(x<=1){
        return 1;
    }
    return x * FinfFact(x-1);
}

int main(){
    int n;
    cout<<"Enter a number to find Factorial of : ";cin>>n;
    (n<0)? cout<<"Factorial dont exist" : cout<<"Factorial of "<<n<<" is : "<<FinfFact(n);
    return 0;
}