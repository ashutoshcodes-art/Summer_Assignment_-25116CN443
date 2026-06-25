#include <iostream>
#include <vector>
using namespace std;

void inputarray(vector<int> &a){
    int n =a.size();
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";cin>>a[i];
    }
}

void printarray(const vector<int> &a){
    int n= a.size();
    cout<<"{ ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<" }"<<endl;
}

int main(){
    int a,b;cout<<"Enter size of 1st array : ";cin>>a;cout<<"Enter size of 2nd array : ";cin>>b;
    vector<int> arr1(a);
    vector<int> arr2(b);

    cout<<"Enter fisrt Sorted Array : "<<endl;
    inputarray(arr1);
    cout<<"Enter second Sorted Array : "<<endl;
    inputarray(arr2);

    vector<int> result;
    int IndexArray1 = 0,IndexArray2 = 0;
    while (IndexArray1<a && IndexArray2<b){
        if(arr1[IndexArray1]<=arr2[IndexArray2]){
            result.push_back(arr1[IndexArray1]);
            IndexArray1++;
        }
        else {
            result.push_back(arr2[IndexArray2]);
            IndexArray2++;
        }
    }

    while (IndexArray1 < a)
{
    result.push_back(arr1[IndexArray1]);
    IndexArray1++;
}

while (IndexArray2 < b)
{
    result.push_back(arr2[IndexArray2]);
    IndexArray2++;
}

    cout<<"Resulting array is : "<<endl;
    printarray(result);
    
    return 0;
}