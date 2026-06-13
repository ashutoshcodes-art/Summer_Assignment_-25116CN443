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
    int largest = arr[0], smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"LArgest number : "<<largest<<" & Smallest : "<<smallest;
    return 0;
}