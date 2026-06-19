#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;cout<<"Enter the dimentions of Matrices in order (m X n): ";cin>>a>>b;
    //Input Matrices
    cout<<"Taking Input of matrix : "<<endl;
    vector<vector<int>> m1(a,vector<int> (b));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"Enter term ("<<i<<","<<j<<") : ";cin>>m1[i][j];
        }
    }

    //Printing Input Matrix
    cout<<"Your Entered first Matrix is : "<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    //Taking Diagonals SUm Matrice
    int sum=0;int limit = min(a,b);
    for (int i = 0; i < a; i++)
    {
        sum+=m1[i][i];
    }
    

    //Printing Final Matrix
    cout<<"Sum of Diagonal elements of Matrix is : "<<sum<<endl;
  
    return 0;
}