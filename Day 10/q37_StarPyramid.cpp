#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Total Rows : ";cin>>n;
    for (int row = 1; row <= n; row++)
    {
        for (int i = 0; i < n - row; i++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= 2*row - 1; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

