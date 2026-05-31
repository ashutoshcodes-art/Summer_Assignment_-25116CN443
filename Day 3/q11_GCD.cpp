#include <iostream>
using namespace std;
int main(){
    int n1,n2,temp=1;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;
    while (n2!=0)
    {
        temp = n1 % n2;
        n1 = n2; n2 = temp;
    }
    cout<<"GCD is "<<n1;
    
    return 0;
}