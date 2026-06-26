#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;



int main(){
    vector<string> ques(5);
    ques[0]="Capital of India?";
    ques[1]="Name of National Bird?";
    ques[2]="What is 2 + 2 ?";
    ques[3]="What is 4 / 2 ?";
    ques[4]="What is Spelling of Red?";

    vector<string> ans(5);
    ans[0]="Delhi";
    ans[1]="Peacock";
    ans[2]="4";
    ans[3]="2";
    ans[4]="Red";

    cout<<"Welcome to Quiz!"<<endl;
    int score = 0;

    for (int i = 0; i < 5; i++)
    {
        string answer;
        cout<<"Ques."<<i+1<<" "<<ques[i]<<endl;
        cout<<"Enter answer : ";getline(cin,answer);
        if(answer==ans[i]){
            cout<<"Correct Answer!"<<endl;
            score++;
        }
        else cout<<"Wrong Answer!"<<endl;
    }
    cout<<"Quiz has been Completed!"<<endl<<"Score ("<<score<<"/5)"<<endl;

    return 0;
}