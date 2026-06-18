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

    //Selection Sort/////
    
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]<a[minIndex]){
                minIndex=j;
            }
        }
        int temp = a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
    
     //Result Array
   cout<<"Sorted array is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;

    //Binary Search
    int Ele;cout<<"Enter element to Search : ";cin>>Ele;
    int start =0 ,end = n-1;
    bool found = false;
    
    while (start<=end){
        int mid=(start+end)/2;

        if(a[mid]==Ele){
            cout << Ele << " found at index " << mid << endl;
            found = true;
            break;
        }
        else if(Ele<a[mid]){
            end = mid-1;
        }
        else start = mid +1;
    }
    if(!found){
        cout<<Ele<<" not Found in Array ";
    }
    
    return 0;
}