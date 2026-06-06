#include <iostream>
using namespace std;
int main()
{
    int n;cout<<"Enter number of elements in array : ";cin>>n;if(n<=0){return 0;}
    int a[n];
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

    //Checking frequencies 
    int ele,freq=0;
    for (int i = 0; i < n; i++)
    {
        bool visited = false;

        for (int j = 0; j < i;j++)
        {
            if(a[i]==a[j]){
                visited = true;break;
            }
        }
        if(visited){
            continue;
        }
        else {
            int tempfreq=0;
            for (int j = 0; j < n; j++)
            {
                if(a[i]==a[j]){
                    tempfreq++;
                }
            }
            if(tempfreq>freq){
                freq = tempfreq;
                ele = a[i];
            }
        }
    }
    
    cout<<ele<<" have most frequency with "<<freq<<" occurances";
    return 0;
}