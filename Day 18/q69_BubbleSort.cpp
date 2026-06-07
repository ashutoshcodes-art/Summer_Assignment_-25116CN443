//It is same as finding intersection

#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Input & Display Array
    int n;cout<<"Enter number of elements in array : ";cin>>n;if(n<=0){return 0;}
    vector<int> a(n); //Uses Heap memory or use pointer //int*a = new int[n];
    //Input arrays
    cout<<"Taking array input : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter ele "<<i+1<<" : ";cin>>a[i];
    }
    //Printing input arrays
    cout<<"Your entered array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;

    //Bubble Sort/////
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(a[j]>a[j+1]){
            int temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
        
    }
    
    
     //Result Array
   cout<<"Sorted array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;
    return 0;
}