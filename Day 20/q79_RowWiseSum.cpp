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
    int m, n;cout<<"Enter dimentions of matrix in order (m X n) : ";cin>>m>>n; 
    vector <vector<int>> Mat(m, vector<int> (n));
    cout<<"Give Matrice Input : "<<endl;
    inputVector(Mat);
    cout<<"Your entered Matrice is : "<<endl;
    PrintVector(Mat);

    //Doing Rowwise sum
    for (int i = 0; i < Mat.size(); i++)
    {   int Rowsum = 0;
        for (int j = 0; j < Mat[i].size(); j++)
        {
            Rowsum += Mat[i][j];
        }
        cout<<"Sum of Row "<<i+1<<" is : "<<Rowsum<<endl;
    }
    

    return 0;
}