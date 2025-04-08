#include<iostream>
using namespace std;
void sayHi(int n){
    if( n == 0) return;
    cout << "Going In : "<<n<<endl;
    sayHi( n -1);
    cout << "Comes out : "<<n<<endl;
}
int main(){
    sayHi(3);
    return 0;
}