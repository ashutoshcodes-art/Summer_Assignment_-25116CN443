#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter number of elements in array : ";cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter ele "<<i+1<<" : ";cin>>a[i];
    }
    cout<<"Your entered array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;

//Reverse Array 
    int rev[n];
    for (int i = 0; i < n; i++)
    {
        rev[n-i-1]=a[i];
    }
   cout<<"Reversed array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<rev[i]<<" ";
    }
    cout<<" ]"<<endl;
    
    return 0;
}