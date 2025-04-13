#include<bits/stdc++.h>
using namespace std;
int sumOf1stN(int num){
    if( num == 0) return 0;
    
    
    return num + sumOf1stN(num-1);
}
int main(){
 
    cout<<"sum is : "<<sumOf1stN(5)<<endl;
    return 0;
}