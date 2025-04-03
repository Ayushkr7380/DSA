/*
    *.....cols times
    *
    .
    .
    row times
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows,cols;
    cout<<"Enter rows : ";
    cin>>rows;
    cout<<"Enter cols : ";
    cin>>cols;
    for(int i=0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
    return 0;
}