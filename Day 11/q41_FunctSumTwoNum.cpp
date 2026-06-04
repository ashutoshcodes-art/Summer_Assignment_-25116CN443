#include <iostream>
using namespace std;

float sumtwonum(float a , float b){
    return a + b;
}

int main(){
    float num1,num2;
    cout<<"Enter two Numbers : ";cin>>num1>>num2;
    cout<<"Sum of given numbers are : "<<sumtwonum(num1,num2);
    return 0;
}