//Find occurence of each character in a string.
//Mixed characters i.e small and capital alphabates also special chacters.
//Using Array hashing

#include<bits/stdc++.h>
using namespace std;

void findOccurenceOfEachChacter(string st,int len){
    int hashedCharArr[255] = {0};
    
    for(int i=0;i<len;i++){
        hashedCharArr[st[i]]++;
    }

    for(int i=0;i<255;i++){
        if(hashedCharArr[i] > 0){
            cout<<char(i) << " appears "<<hashedCharArr[i]<<" times."<<endl;
        }
    }
}
int main(){
    string st = "AAAAayushhHh@@";
    int len = st.length();
    
    findOccurenceOfEachChacter(st,len);

    return 0;
}