#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Input & Display Array
    int n,m;cout<<"Enter number of elements in array 1 : ";cin>>n;cout<<"Enter number of elements in array 2 : ";cin>>m;if(n<=0|| m<=0){return 0;}
    vector<int> a(n),b(m); //Uses Heap memory or use pointer //int*a = new int[n];
    //Input arrays
    cout<<"Taking First array input : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter ele "<<i+1<<" : ";cin>>a[i];
    }
    cout<<"Taking Second array input : "<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<"Enter ele "<<i+1<<" : ";cin>>b[i];
    }
    //Printing input arrays
    cout<<"Your entered array 1 is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;
    cout<<"Your entered array 2 is : [ ";
    for (int i = 0; i < m; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<" ]"<<endl;

    //Merging Arrays
    vector<int> merg(m+n);
    
    
     //Result Array
   cout<<"Merged array is : [ ";
    for (int i = 0; i < n+m; i++)
    {
        cout<<merg[i]<<" ";
    }
    cout<<" ]"<<endl;
    return 0;
}