#include <iostream>
using namespace std;

bool CheckPallindrome(int num){
    int rev = 0;
    int temp = num;
    while(temp){
        rev *=10;
        rev += temp%10;
        temp/=10;
    }
    return rev==num;
}

int main(){
    int n ;cout<<"ENter a number to check palindrome : ";cin>>n;
    CheckPallindrome(n) ? cout<<n<<" is Palindrome": cout<<n<<" is not Palindrome";
    return 0;
}