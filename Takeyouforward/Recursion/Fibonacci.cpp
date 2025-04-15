#include<bits/stdc++.h>
using namespace std;
int fibonacci(int num){
    if(num <= 1) return num;

    int last = fibonacci(num -1);
    int secondLast = fibonacci(num - 2);
    
    
    
    return last + secondLast;
}
int main(){
    int num = 6;
    //0 1 1 2 3 5 8
    cout<<fibonacci(num)<<endl;
    return 0;
}