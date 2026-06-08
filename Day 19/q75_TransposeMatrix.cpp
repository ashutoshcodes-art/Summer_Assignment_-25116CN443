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

    //Transposing Matrice
    vector<vector <int>> Transpose(b,vector <int> (a));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            Transpose[j][i]=m1[i][j];
            
        }
        
    }
    

    //Printing Final Matrix
    cout<<"Transpose of Matrix is : "<<endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<Transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}