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
    cout<<"Prime Factors of "<<num<<" are : ";

    for(int i = 2 ; i<=num ; i++ ){
        while(num%i==0){
            num/=i;
            cout<<i<<" ";
        }
    }
    return 0;
}