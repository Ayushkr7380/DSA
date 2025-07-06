#include<iostream>
using namespace std;

void findPrime(int start,int end){
    for(int i=start;i<=end;i++){
        if(i < 2 ) continue;
        bool notPrime = false;
        for(int j=2;j<=i/2;j++){
            if(i%j == 0){
                notPrime = true;
                break;
            }
        }
        if(!notPrime) cout<<i<<" is a prime number."<<endl;
    }
}
int main(){
    int start = 0;
    int end = 50;

    findPrime(start,end);

    return 0;
}