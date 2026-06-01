#include <iostream>
using namespace std;
int main(){
    int dec;
    cout<<"Enter Decimal Number : ";cin>>dec;
    cout<<"Binary conversion of "<<dec<< " is ";
    int binary = 0,place = 1;
    while(dec){
        binary+= place*(dec%2);
        dec/=2;place*=10;
    }
    cout<<binary;
    return 0;
}