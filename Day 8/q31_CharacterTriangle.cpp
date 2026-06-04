#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of rows : ";cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (char col = 'A'; col <= 'A' + row; col++)
        {
            cout<<col;
        }
        cout<<endl;
    }
    
    return 0;
}