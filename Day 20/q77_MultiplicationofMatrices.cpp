#include <iostream>
#include <vector>
using namespace std;
int main(){
    int row1,col1;cout<<"Enter the dimentions of !st Matrices in order (m X n): ";cin>>row1>>col1;
    int row2,col2;cout<<"Enter the dimentions of !st Matrices in order (m X n): ";cin>>row2>>col2;
    //Input Matrices
    cout<<"Taking Input of first matrix : "<<endl;
    vector<vector<int>> m1(row1,vector<int> (col1));
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout<<"Enter term ("<<i<<","<<j<<") : ";cin>>m1[i][j];
        }
    }

    cout<<"Taking Input of second matrix : "<<endl;
    vector<vector<int>> m2(row2,vector<int> (col2));
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<"Enter term ("<<i<<","<<j<<") : ";cin>>m2[i][j];
        }
    }

    //Printing Input Matrix
    cout<<"Your Entered first Matrix is : "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Your Entered Second Matrix is : "<<endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //Multiplication of two martrices
    if(col1!=row2){
        cout<<"Multiplication Not defined ";
        return 0;
    }
    vector<vector <int>> mult(row1,vector<int> (col2));
    for(int i =0 ;i<row1 ;i++){
        for (int j = 0; j < col2; j++)
        {
            mult[i][j]=0;
            for (int k = 0; k < col1; k++)
            {
                mult[i][j] += m1[i][k]*m2[k][j];
            }
            
        }
        
    }
    

    //Printing Multiplication result
    cout<<"Multiplication of 1st & 2nd Matrix is : "<<endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout<<mult[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}