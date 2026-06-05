#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms yo want in array : ";cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter ele no. "<<i+1<<" : ";cin>>arr[i];
    }
    cout<<"Your entered array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    int largest=arr[0],SndLargest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(largest<arr[i] ){
            largest=arr[i];
        }
        if(SndLargest<arr[i] && largest!=arr[i]){
            SndLargest = arr[i];
        }
    }
    cout<<endl<<"Largest : "<<largest<<" Second Largest : "<<SndLargest;
    return 0;
}
