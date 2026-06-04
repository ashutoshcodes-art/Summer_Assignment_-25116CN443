/*

********* 
 ******* 
  ***** 
   *** 
    * 
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Total Rows : ";cin>>n;
    for (int row = 1; row <= n; row++)
    {
        for (int spaces = 1; spaces <= row-1; spaces++)
        {
            cout<<" ";
        }
        for (int star = 1; star <=2*(n-row) +1; star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
/*
For 5 
11 - 2*row
General 
(2*n +1 ) - 2*row
2*(n-row) +1
*/