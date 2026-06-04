/*
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA 
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Total Rows : ";cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int space = 1; space <= n-row +1; space++)
        {
            cout<<" ";
        }
        for (char i = 'A'; i <= 'A' + row ; i++)
        {
            cout<<i;
        }
        for(char j = 'A' + row -1 ; j >= 'A' ; j--){
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}