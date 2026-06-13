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
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+= arr[i];
    }
    cout<<"Sum of Given array : "<<sum<<" Average of Given array : "<<sum/n;

    return 0;
}