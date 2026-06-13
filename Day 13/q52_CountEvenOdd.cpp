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
    int even=0,odd=0;
    for (int i = 0; i < n; i++)
    {
        (arr[i]%2==0) ? even++ : odd++;
    }
    cout<<"Even numbers: "<<even<<endl;
    cout<<"Odd numbers: "<<odd<<endl;
    
    return 0;
}