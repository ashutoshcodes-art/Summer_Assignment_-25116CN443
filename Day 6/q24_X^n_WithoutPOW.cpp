#include <iostream>
using namespace std;
int main(){
    int n,p,t=1;
    cout<<"Enter number and its power : ";cin>>n>>p;
    cout<<n<<" to the power "<<p<<" is : ";
    while(p){
        t*=n;
        p--;
    }
    cout<<t;
    return 0;
}