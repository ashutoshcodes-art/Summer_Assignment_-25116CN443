#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n , temp , sum;
    cout<<"Enter no of terms of armstrong you wanna print : ";
    cin>>n;
    
for (int i = 1; i <=n; i++)
{   sum =0;
    temp = i;
    int digits = to_string(i).length();
    while(temp){
        sum += (int)pow(temp%10,digits);
        temp/=10;
    }
    if(sum==i){
        cout<<i<<" ";
    }
}
    return 0;
}