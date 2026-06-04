/*

    1 
   121 
  12321 
 1234321 
123454321 
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Total Rows : ";cin>>n;
    for (int row = 1; row <= 5 ; row++)
    {
        for (int spaces = 0; spaces < n-row; spaces++)
        {
            cout<<" ";
        }
        for (int col = 1; col <= 2*row-1; col++)
        {
            (col<=row) ? cout<<col : cout<<1;
        }
        cout<<endl;
        
    }
    
    return 0;
}