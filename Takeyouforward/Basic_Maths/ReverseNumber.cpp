#include<bits/stdc++.h>
using namespace std;

void reverseNum(int num){
    int rev = 0,temp=num;
    while(temp!=0){
        rev = rev*10 + (temp%10);
        temp/=10;
    }
    cout<<"Reverse of "<<num<<" is "<<rev<<endl;
}
int main(){
    
    int num = 12342;
    reverseNum(num);

    return 0;
}