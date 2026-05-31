#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n , temp,sum=0;
    cout<<"Enter number to check armstrong : ";
    cin>>n;

    temp =n ;
    //counting digits 
    int digits = to_string(n).length();
    //now checking 
    while(temp){//bcs it runds only to 0
        sum += pow(temp%10,digits);
        temp /=10;
    }
    cout<<(sum == n ? "Yes it is Armstrong" : " No it is not Armstrong");
    return 0;
}