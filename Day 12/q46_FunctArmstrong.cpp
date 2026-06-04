#include <iostream>
#include <cmath>
using namespace std;

int ChkArmstrong(int n){
    int sum=0,digits=to_string(n).length();
    int temp = n;
    while(temp){
        sum += pow(temp%10,digits);
        temp/=10;
    }
    if(sum==n){
        return 1;
    }
    return 0;
}

int main(){
    int n ; cout<<"ENter a number to check Armstrong : ";cin>>n;
    // ChkArmstrong(n) ? cout<<n<<" is Armstrong" : cout<<n<<" is not Armstrong";

    for (int i = 1; i <= n; i++)
    {
        if(ChkArmstrong(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}