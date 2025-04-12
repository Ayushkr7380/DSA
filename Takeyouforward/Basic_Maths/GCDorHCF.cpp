#include<bits/stdc++.h>
using namespace std;

//using loops
void gcdUsingLoops(int n1,int n2){
    int gcd = 1;
    int minNum = min(n1,n2);
    for(int i=1;i<=minNum;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    cout<<"using loop GCD : "<<gcd<<endl;

}

//using recursion(Euclidean Algorithm)
int usingRecursion(int n1,int n2){
    if(n2 == 0) return n1;

    return usingRecursion(n2,n1%n2);
}
int main(){
    int n1 = 6, n2=4;
    gcdUsingLoops(n1,n2);
    int gcd = usingRecursion(n1,n2);
    cout<<"Using recursion : "<<gcd<<endl;
    return 0;
}