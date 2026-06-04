#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter no of rows : ";cin>>n;
    for (char col = 'A' ; col < 'A' + n ; col++)
    {
        for (char row = 'A'; row <= col; row++)
        {
            cout<<col;
        }
        cout<<endl;
    }
    
    return 0;
}