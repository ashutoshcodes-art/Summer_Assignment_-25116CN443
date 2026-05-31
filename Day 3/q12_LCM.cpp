#include <iostream>
using namespace std;
int main(){
    int a , b, temp=1,x,y;
    cout<<"Enter 2 numbers to find LCM : ";
    cin>>x>>y;
    a=x;b=y;
    while(b!=0){
        temp = a%b;
        a=b;b=temp;
    }
    int GCD = a;
    int LCM = (x*y)/GCD;
    cout<<"LCM is : "<<LCM;
    return 0;
}