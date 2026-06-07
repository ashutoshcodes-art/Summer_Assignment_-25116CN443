#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Input & Display Array
    int n,m;cout<<"Enter number of elements in array 1 : ";cin>>n;cout<<"Enter number of elements in array 2 : ";cin>>m;if(n<=0|| m<=0){return 0;}
    vector<int> a(n),b(m); //Uses Heap memory or use pointer //int*a = new int[n];
    //Input arrays
    cout<<"Taking First array input : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter ele "<<i+1<<" : ";cin>>a[i];
    }
    cout<<"Taking Second array input : "<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<"Enter ele "<<i+1<<" : ";cin>>b[i];
    }
    //Printing input arrays
    cout<<"Your entered array 1 is : [ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" ]"<<endl;
    cout<<"Your entered array 2 is : [ ";
    for (int i = 0; i < m; i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<" ]"<<endl;

    //Intersecting Arrays
    int newsize=m+n,postn=0;
    vector<int> merg(newsize);
    for (int i = 0; i < n; i++)
    {

        bool visited = false;
        for (int j = 0; j < i; j++)
            {
                if(a[i]==a[j]){
                    visited = true;
                }
            }
        if(visited){
            continue;
        }
        else {
            for (int j = 0; j < m; j++)
        {
            if(a[i]==b[j]){
                merg[postn]= a[i];
                postn++;
            }
        }
        }
        
    }
    //Remove Duplicates 
    for (int i = 0; i < newsize; i++)
    {
        for (int j = i+1; j < newsize; j++)
        {
            if(merg[i]==merg[j]){
                for (int k = j; k < newsize-1; k++)
                {
                    merg[k] = merg[k+1];
                }
                n--;
                j--;
            }
        }
    }
    //Remove zeroes
    for (int i = 0; i < newsize; i++)
    {
        if(merg[i]==0){
                newsize--;i--;
            }
            
    }
    

    
     //Result Array
   cout<<"Intersection of array is : [ ";
    for (int i = 0; i < newsize; i++)
    {
        cout<<merg[i]<<" ";
    }
    cout<<" ]"<<endl;
    return 0;
}