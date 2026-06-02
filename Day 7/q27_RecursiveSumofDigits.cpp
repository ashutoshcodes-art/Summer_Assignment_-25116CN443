#include <iostream>
using namespace std;

int SumDigits(int i){
    if (i == 0){
        return 0;
    }
    return (i%10) + SumDigits(i/10);
}

int main(){
    int n;cout<<"ENter a number to sum up digits : ";cin>>n;
    cout<<"The sum of Digits of "<<n<<" is "<<SumDigits(n);
    return 0;
}