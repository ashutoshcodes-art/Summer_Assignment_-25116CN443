#include <iostream>
#include <cmath>
using namespace std;

int DigitsCount(int a){
    int count=0;
    while(a!=0){
        a/=10;
        count++;
    }
    return count;
}

void CheckArmstrong(int x){
    int y =x,sum=0;
    int n = DigitsCount(x);
    while(y!=0)
    {
        int temp = y%10;
        sum += pow(temp,n);
        y/=10;
    }
    if(sum==x){
        cout<<"Yes the "<<x<< " is ArmStrong number";
    }
    else 
    cout<<"No the "<<x<< " is not ArmStrong number";
    
}

int main(){
    int n;
    cout<<"Enter number to check armstrong : ";
    cin>>n;
    CheckArmstrong(n);
    return 0;
}