#include <iostream>
using namespace std;
int main(){
    int n;cout<<"Enter number of elements in array : ";cin>>n;cin>>n;if(n<=0){return 0;}
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

//Rotate Array 
    int k;cout<<"Enter how many times you wanna rotate left : ";cin>>k;k=k%n;
    for (int i = 1; i <= k; i++)
    {
        int temp=a[0];
        for (int j = 0; j < n-1; j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=temp;
    }
    
    //Result Array
   cout<<"Rotated array "<<k<<" times is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;
    
    return 0;
}