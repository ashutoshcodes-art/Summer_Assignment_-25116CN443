#include <iostream>
using namespace std;

int main(){
    cout<<"Welcome to Voting Eligibility Checking System!"<<endl;
    int age;cout<<"Enter your Age : ";cin>>age;

    if(age<=0|| age >=120){
        cout<<"Please enter valid Age";
        return 0;
    }
    if(age<18){
        cout<<"You are not Eligible for Voting"<<endl<<"You can vote after "<<18-age<<" Years"<<endl;
    }
    else {
        cout<<"You are Eligible for Voting"<<endl<<"You can vote "<<endl;
    }
    return 0;
}