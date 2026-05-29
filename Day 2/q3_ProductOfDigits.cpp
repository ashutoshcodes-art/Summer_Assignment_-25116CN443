#include <iostream>
using namespace std;
int main(){
    int num,product=1;
    cout<<"Enter a number to find product of digits : ";
    cin>>num;
    int n = num;
    while(n!=0){
        int temp = n%10;
        product*=temp;
        n/=10;
    }
    cout<<"the product of digits of "<<num<<" is "<<product<<endl;
    return 0;
}