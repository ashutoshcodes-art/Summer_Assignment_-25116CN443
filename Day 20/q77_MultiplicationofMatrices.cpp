#include <iostream>
#include <vector>
using namespace std;

void inputVector(vector<vector<int>> & mat){  //If & is used it is call by reference where org vector is passed
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout<<"Enter term ("<<i<<","<<j<<") : ";cin>>mat[i][j];
        }
    }
}

void PrintVector(const vector<vector<int>> & mat){  //Without use of & copy of Vector is passed which will use more stporage
    for (int i = 0; i < mat.size(); i++)      //const prevents any change in matrix
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int row1,col1;cout<<"Enter the dimentions of !st Matrices in order (m X n): ";cin>>row1>>col1;
    int row2,col2;cout<<"Enter the dimentions of !st Matrices in order (m X n): ";cin>>row2>>col2;
    //Input Matrices
    cout<<"Taking Input of first matrix : "<<endl;
    vector<vector<int>> m1(row1,vector<int> (col1));
    inputVector(m1);

    cout<<"Taking Input of second matrix : "<<endl;
    vector<vector<int>> m2(row2,vector<int> (col2));
    inputVector(m2);

    //Printing Input Matrix
    cout<<"Your Entered first Matrix is : "<<endl;
    PrintVector(m1);
    cout<<"Your Entered Second Matrix is : "<<endl;
    PrintVector(m2);
    
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
            for (int k = 0; k < row2; k++)
            {
                mult[i][j] += m1[i][k]*m2[k][j];
            }
            
        }
        
    }
    

    //Printing Multiplication result
    cout<<"Multiplication of 1st & 2nd Matrix is : "<<endl;
    PrintVector(mult);

    return 0;
}