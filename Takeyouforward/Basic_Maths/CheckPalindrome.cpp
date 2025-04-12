#include<bits/stdc++.h>
using namespace std;

void checkPalindrome(int num){
    int rev = 0,temp=num;
    while(temp!=0){
        rev = rev*10 + (temp%10);
        temp/=10;
    }
    if(rev == num){
        cout<<num<<" is a palindrome number."<<endl;
    }
    else{
        cout<<num<<" is not a palindrome number."<<endl;
    }
}
int main(){
    
    int num = 151;
    checkPalindrome(num);

    return 0;
}