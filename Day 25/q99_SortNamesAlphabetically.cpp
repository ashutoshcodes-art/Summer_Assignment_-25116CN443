#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

void inputnames(vector<string>& a){
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter Name "<<i+1<<" : ";getline(cin,a[i]);
    }
    
}

void printnames(const vector<string> &x){
    int n = x.size();
    cout<<"{ ";
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<"}";
}

int main(){
    int n;cout<<"Enter number of names you want : ";cin>>n;
    if(n<=0){
        cout<<"Envalid Input";
        return 0;
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //cin.ignore() ignores just One Character
    vector<string> names(n);
    inputnames(names);

    cout<<"Entered order : ";printnames(names);cout<<endl;
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(names[j]>names[j+1]){
                // string temp = names[j];
                // names[j] = names[j+1];
                // names[j+1] = temp;
                swap(names[j],names[j+1]);
            }
        }   
    }
    
    cout<<"Sorted Order : ";printnames(names);
    
    return 0;
}