#include<bits/stdc++.h>
using namespace std;
class Print1ToN{
    public : 
        void print(int n){
            if( n == 0) return;

            print(n-1);

            cout<<n<<endl;
        } 
};
int main(){
    Print1ToN obj;
    obj.print(5);
    return 0;
}