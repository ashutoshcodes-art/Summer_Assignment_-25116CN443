#include <iostream>
using namespace std;
int main()
{
    int n;cout<<"Enter number of elements in array : ";cin>>n;if(n<=0){return 0;}
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

    //Input Sun & Checking for pairs
    int sum;cout<<"Enter sum : ";cin>>sum;
    int pair=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            if(a[i]+a[j]==sum){
                cout<<a[i]<<" + "<<a[j]<<" = "<<sum<<" : ("<<a[i]<<","<<a[j]<<")"<<endl;
                pair++;
            }
        }
        
    }
    if(pair==0){
        cout<<"No Pair found.";
    }
    return 0;
}