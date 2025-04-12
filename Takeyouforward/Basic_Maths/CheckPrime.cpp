//For prime number ,there should be only two factors of the number,which is 1 and itself.
#include<bits/stdc++.h>
using namespace std;

void checkPrime(int num){
    int count = 0;
    for(int i=1;i<=num;i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 2){
        cout<<num<<" is a prime number."<<endl;
    }
    else{
        cout<<num<<" is not a prime number."<<endl;
    }
}
int main(){
    
    int num = 7;
    checkPrime(num);
    return 0;
}