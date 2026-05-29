#include <iostream>

using namespace std;

int main(){
    int sum=0,n;
    cout<<"Enter number to get sum upto : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum upto "<<n<<" is : "<<sum;
    return 0;
}