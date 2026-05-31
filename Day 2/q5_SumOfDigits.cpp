#include <iostream>
using namespace std;
int main(){
    int sum=0,num;
    cout<<"Enter an integer to find sum of digits : ";
    cin>>num;
    int t = num;
    while(t!=0){
        int temp = t%10;
        sum += temp;
        t /=10;
    }
    cout<<"Sum of digits of "<<num<<" is "<<sum<<endl;
    return 0;
}