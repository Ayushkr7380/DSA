#include<bits/stdc++.h>
using namespace std;
void countDigits(int num){
    int count = 0;
    while(num!=0){
        count++;
        num/=10;
    }
    cout<<"Count is : "<<count<<endl;
}
int main(){
    int num = 12121;
    countDigits(num);
    return 0;
}