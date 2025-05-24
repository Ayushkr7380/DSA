//Find occurence of each character in a string.
//All characters are small alphabates.
//Using Array hashing

#include<bits/stdc++.h>
using namespace std;

void findOccurenceOfEachChacter(string st,int len){
    int hashedCharArr[26] = {0};
    
    for(int i=0;i<len;i++){
        hashedCharArr[st[i] - 'a']++;
    }

    for(int i=0;i<26;i++){
        if(hashedCharArr[i] > 0){
            cout<<char(i + 'a') << " appears "<<hashedCharArr[i]<<" times."<<endl;
        }
    }
}
int main(){
    string st = "aayushhhh";
    int len = st.length();
    
    findOccurenceOfEachChacter(st,len);

    return 0;
}