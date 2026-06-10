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
    cout<<"Taking Input of first matrix : "<<endl;
    vector<vector<int>> m1(a,vector<int> (b));
    inputVector(m1);

    cout<<"Taking Input of second matrix : "<<endl;
    vector<vector<int>> m2(a,vector<int> (b));
    inputVector(m2);

    //Printing Input Matrix
    cout<<"Your Entered first Matrix is : "<<endl;
    PrintVector(m1);
    cout<<"Your Entered Second Matrix is : "<<endl;
    PrintVector(m2);
    
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
    PrintVector(add);


    return 0;
}