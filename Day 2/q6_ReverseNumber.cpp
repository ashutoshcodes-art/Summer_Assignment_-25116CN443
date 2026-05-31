#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter a number to find REverse of : ";
    cin>>num;
    int n = num;
    while(n!=0){
        int temp = n%10;
        sum*=10;
        sum += temp;
        n/=10;
    }
    cout<<"the reverse of "<<num<<" is "<<sum<<endl;
    return 0;
}