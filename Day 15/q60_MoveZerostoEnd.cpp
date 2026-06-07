#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;cout<<"Enter number of elements in array : ";cin>>n;if(n<=0){return 0;}
    vector<int> a(n);
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

    //Move Zeroes to end
    int pos=0;
    for (int i = 0; i < n; i++)
    {   
        if(a[i]!=0){ // Checking non zero index
            a[pos]=a[i]; // moving to index containing zero
            pos++; //move to nect index
        }
    }
    //Filling zeros in rest indexes
    for (int i = pos; i < n; i++)
    {
        a[i]=0;
    }
    
    //Result Array
   cout<<"Resultant array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;
    
    return 0;
}