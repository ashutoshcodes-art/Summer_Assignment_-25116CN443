#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Input & Display Array
    int n;cout<<"Enter number of elements in array : ";cin>>n;if(n<=0){return 0;}
    vector<int> a(n); //Uses Heap memory or use pointer //int*a = new int[n];
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

    //Removing Duplicates
    int term=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j]){
                for (int k = j; k < n-1; k++)
                {
                    a[k] = a[k+1];term++;
                }
                n--;
                j--;
            }
        }
        
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