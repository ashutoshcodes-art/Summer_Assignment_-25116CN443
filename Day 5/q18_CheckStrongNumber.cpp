#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENter a number to check : ";
    cin>>num;
    int x =num,sum=0;
    while(x){
        int temp = x%10,fact=1;
        while(temp){
            fact *= temp;temp--;
        }
        sum+=fact;
        x/=10;

    }
    (sum==num) ? (cout<<"Yes the "<<num<<" is Strong Number") : (cout<<"No the "<<num<<" is not Strong Number");
    return 0;
}