#include <iostream>
using namespace std;

int CheckPallindrome(int num){
    int rev = 0;
    int temp = num;
    while(temp){
        rev *=10;
        rev += temp%10;
        temp/=10;
    }
    if(rev==num){
        return 1;
    }
    return 0;
}

int main(){
    int n ;cout<<"ENter a number to check palindrome : ";cin>>n;
    CheckPallindrome(n) ? cout<<n<<" is Palindrome": cout<<n<<" is not Palindrome";
    return 0;
}