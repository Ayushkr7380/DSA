#include<bits/stdc++.h>
using namespace std;

void checkArmstrong(int num){
    int digits = 0,sum=0;
    int temp = num;
    while(temp!=0){
        digits++;
        temp/=10;
    }

    temp = num;
    while(temp!=0){
        int lastDigit = temp % 10;
        int powerOfLastDigit = 1;
        for(int i=0;i<digits;i++){
            powerOfLastDigit *= lastDigit;
        }
        sum+=powerOfLastDigit;
        temp/=10;
    }

    cout<<"Sum : "<<sum<<endl;
    if(sum==num){
        cout<<num<<" is a armstrong number."<<endl;
    }
    else{
        cout<<num<<" is not a armstrong number."<<endl;
    }
}
int main(){
    int num = 153;
    checkArmstrong(num);
    return 0;
}