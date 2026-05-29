#include <iostream>

using namespace std;

int main(){
    int sum=0,n;
    cout<<"Enter number to get Table of : ";
    cin>>n;
    for(int i = 1;i<=10;i++){
        sum+=n;
        cout<<n<<" * "<<i<<" = "<<sum<<endl;
    }
    return 0;
}