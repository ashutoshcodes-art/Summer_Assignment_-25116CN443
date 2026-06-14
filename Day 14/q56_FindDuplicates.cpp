#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;cout<<"Enter number of elements in array : ";cin>>n;if(n<=0){return 0;}
    vector<int> a(n);
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
    for (int i = 0; i < n; i++)
    {
        bool visited = false;

        for (int j = 0; j < i; j++)
        {
            if(a[j]==a[i]){
                visited = true;
            }
        }

        if(visited){
            continue;
        }
        else { int count=0;
            for (int k = 0; k < n; k++)
            {
                if(a[i]==a[k]){
                    count++;
                }
            }
            if(count>1) {cout<<a[i]<<" found "<<count<<" times"<<endl;}
        }
        
    }
    
    return 0;
}