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
    int a,b;cout<<"Enter the dimentions of Matrices in order (m X n): ";cin>>a>>b;
    //Input Matrices
    cout<<"Taking Input of matrix : "<<endl;
    vector<vector<int>> m1(a,vector<int> (b));
    inputVector(m1);

    //Printing Input Matrix
    cout<<"Your Entered first Matrix is : "<<endl;
    PrintVector(m1);

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
    PrintVector(Transpose);
    return 0;
}