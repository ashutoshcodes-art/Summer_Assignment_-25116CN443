#include <iostream>
using namespace std;

int findmax(int a , int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if (b>c){
        return b;
    }
    return c;
}

int main(){
    int n1,n2,n3;cout<<"Enter 3 Numbers : ";cin>>n1>>n2>>n3;
    cout<<"The max no among "<<n1<<" , "<<n2<<" & "<<n3<<" is "<<findmax(n1,n2,n3);
    return 0;
}