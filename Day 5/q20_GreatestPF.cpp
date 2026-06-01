#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to find Prime Factors of : ";
    cin>>num;
    if(num<=1){
        cout<<"No Prime Factors exists";
        return 0;
    }
    int t,temp=num;
    for(int i = 2 ; i<=temp ; i++ ){
        while(temp%i==0){
            temp/=i;
            t = i;
        }
    }
    cout<<"Greatest Prime Factor of "<<num<<" is : "<<t;
    return 0;
}