#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a,b;cout<<"Enter the dimentions of Matrices in order (m X n): ";cin>>a>>b;
    //Input Matrices
    cout<<"Taking Input of first matrix : "<<endl;
    vector<vector<int>> m1(a,vector<int> (b));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"Enter term ("<<i<<","<<j<<") : ";cin>>m1[i][j];
        }
    }

    cout<<"Taking Input of second matrix : "<<endl;
    vector<vector<int>> m2(a,vector<int> (b));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"Enter term ("<<i<<","<<j<<") : ";cin>>m2[i][j];
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
    cout<<"Your Entered Second Matrix is : "<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //Adding two martrices
    vector<vector <int>> add(a,vector<int> (b));
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            add[i][j] = m1[i][j] + m2[i][j];
        }
        
    }

    //Printing Additon result
    cout<<"Addition of 1st & 2nd Matrix is : "<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}