#include <iostream>
using namespace std;
int main(){
    int n,isPrime=1;
    cout<<"Enter a number to check Prime : "<<endl;
    cin>>n;
    if(n<1){
        cout<<n<<" is not Prime"<<endl;
    }
    else if(n==1){
        cout<<n<<" is not Prime";
    }
    else {
        for (int i = 2; i*i <=n; i++)
        {
            if(n%i==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            cout<<n<<" is Prime"<<endl;   
        }
        else 
        cout<<n<<" is not Prime"<<endl;   
    }
    
    return 0;
}