#include<bits/stdc++.h>
using namespace std;
class PrintSomethingNTimes{
    public :
        void printNTimes(string s,int n){
            if(n == 0) return;
            
            cout<<s<<endl;
            
            return printNTimes(s,(n-1));
        }
};

int main(){
    PrintSomethingNTimes obj;
    obj.printNTimes("ayush",5);
    return 0;
}