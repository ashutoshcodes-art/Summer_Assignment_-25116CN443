#include <iostream>
using namespace std;
int main(){
    int num,fact=1;
    cout<<"Enter number to find factorial of : "<<endl;
    cin>>num;
    int n = num;
    for(int i = 0;i<num;i++){
        fact *=n;
        n--;
    }
    cout<<"factorial of "<<num<<" is "<<fact<<endl;

    return 0;
}