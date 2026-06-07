#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;cout<<"Enter number of elements in array : ";cin>>n;if(n<=0){return 0;}
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
    cout<<"]";
    int find,count=0;
    cout<<"Enter number to find freq. in this String : ";cin>>find;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==find){
            count++;
        }
    }
    cout<<"Frequency of "<<find<<" is : "<<count;
    return 0;
}
