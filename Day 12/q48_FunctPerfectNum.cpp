#include <iostream>
using namespace std;

bool PerfectNum(int num){
    int sum = 0;
    for (int i = 1; i < num; i++)
    {
        if(num%i==0){
            sum += i;
        }
    }
    return sum == num;
}

int main(){
    int n;cout<<"ENter a number to check : ";cin>>n;
    PerfectNum(n) ? cout<<"Yes "<<n<<" is a Perfect Number" : cout<<"No "<<n<<" is a not Perfect Number";
    return 0;
}