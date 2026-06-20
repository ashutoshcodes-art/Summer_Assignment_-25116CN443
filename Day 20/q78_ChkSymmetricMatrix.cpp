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
    int n;cout<<"Enter dimentions of matrix in order (n X n) : ";cin>>n; //Only Square Matrices acan be Symmetric or skew symm
    vector<vector<int>> mat(n,vector<int> (n));
    cout<<"Taking Matice Input : "<<endl;
    inputVector(mat);
    cout<<"Your Entered Matrix is : "<<endl;
    PrintVector(mat);
    
    //Checking symmetric
    bool symmetric = true;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            if(i==j){
                continue;
            }
            else if(mat[i][j]!=mat[j][i]){
                symmetric = false;
                break;
            }
        }
        
    }
    //Giving Result
    (!symmetric) ? cout<<"Your Matrix is not Symmetric"<<endl :  cout<<"Your Matrix is Symmetric"<<endl;
    return 0;
}