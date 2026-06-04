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
        for (int col = 1; col <= row; col++)
        {
            cout<<col;
        }
        for (int i = row-1; i >= 1; i--)
        {
            cout<<i;
        }
        
        cout<<endl;
        
    }
    
    return 0;
}