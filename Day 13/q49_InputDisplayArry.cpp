#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms yo want in array : ";cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter ele no. "<<i+1<<" : ";cin>>arr[i];
    }
    cout<<"Your entered array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" ]"<<endl;
    
    return 0;
}