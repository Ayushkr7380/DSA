#include<bits/stdc++.h>
using namespace std;

void printAllDivisor(int num){
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int num = 9;
    printAllDivisor(num);
    return 0;
}