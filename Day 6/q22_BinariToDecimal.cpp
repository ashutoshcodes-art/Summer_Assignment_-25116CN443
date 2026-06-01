#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int bin;
    cout<<"Enter binary Number : ";cin>>bin;
    cout<<"Decimal conversion of "<<bin<< " is ";
    int i = 0 , sum = 0;
    while(bin){
        sum += (bin%10)*pow(2,i);
        i++;bin/=10;
    }
    cout<<sum;
    return 0;
}