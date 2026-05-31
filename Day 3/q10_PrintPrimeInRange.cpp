#include <iostream>
using namespace std;
int main(){
    int n,isPrime=1;
    cout<<"Enter number to print prime numbers upto : ";
    cin>>n;
    cout<<"Prime numbers are : 2 ";
    for (int j = 3; j <= n; j++)
    {
        for(int i = 2;i*i<=j;i++){
        isPrime=1;
        if(j%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1)
        cout<<j<<" ";   
    }
    
    return 0;
}