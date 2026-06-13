#include <iostream>
#include <string>
using namespace std;

int power(int base, int powr){
    int a =1;
    while(powr--){
        a*=base;
    }
    return a;
}

bool ChkArmstrong(int n){    //If returning true or false usee Bool function type
    int sum=0,digits=to_string(n).length();
    int temp = n;
    do {
        sum += power(temp%10,digits);
        temp/=10;
    }while(temp); //Have to handle 0 bcs its a armstrong num
    return sum == n;
}

int main(){
    int n ; cout<<"ENter a number to check Armstrong upto : ";cin>>n;
    // ChkArmstrong(n) ? cout<<n<<" is Armstrong" : cout<<n<<" is not Armstrong";

    for (int i = 1; i <= n; i++)
    {
        if(ChkArmstrong(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}