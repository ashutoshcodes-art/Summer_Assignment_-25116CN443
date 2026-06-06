//This program is to find missing number from 0 to N

#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter a number : ";cin>>n;
    int a[n-1],N=1;
    cout<<"Input Array of "<<n-1<<" elements  : "<<endl;
    for (int i = 0; i < n-1; i++)
    {
        cout<<"Enter ele "<<i+1<<" : ";cin>>a[i];
    } 
        cout<<"Your entered array is : [ ";
    for (int i = 0; i < n-1; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;

    //Sum actual 
    int sum=0,temp=n;
    while(temp){
        sum += temp;temp--;
    } 
    //sum apparant
    int sumact=0;
    for (int i = 0; i < n-1; i++)
    {
        sumact+= a[i];
    }
    //Get missing number
    cout<<"Missing number is : "<<sum-sumact;
    
    
    return 0;
}